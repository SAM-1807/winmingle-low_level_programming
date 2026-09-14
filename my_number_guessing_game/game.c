#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * get_player_name - prompts the user for their name and stores it in the buffer.
 * @buffer: the character array where the name will be stored.
 * @size: the maximum number of characters the buffer can hold.
 *
 * If the user presses Enter without typing anything, the name defaults to "Player".
 */

void get_player_name(char *buffer, int size)
{
	printf("Enter your name: ");

	/* Read up to size - 1 characters from standard input. */
	fgets(buffer, size, stdin);

	/* Strip the trailing newline that fgets leaves in the buffer. */
	buffer[strcspn(buffer, "\n")] = '\0';

	/* If the user entered nothing, use "Player" as the default name. */
	if (buffer[0] == '\0')
		strcpy(buffer, "Player");
}

/**
 * choose_difficulty - prompts the player to select a difficulty level.
 *
 * Repeatedly asks until the player enters one of 'e', 'm', or 'h'
 * (case-insensitive). Returns the normalized lowercase character.
 *
 * Return: 'e' for Easy, 'm' for Medium, or 'h' for Hard.
 */

char choose_difficulty(void)
{
	char choice;
	int c;

	while (1)
	{
		/* Show the menu and read one character. */
		printf("Choose a difficulty level:\n");
		printf("Press 'e' for Easy, 'm' for Medium, or 'h' for Hard: ");
		scanf(" %c", &choice);

		/* Normalize to lowercase so 'E', 'M', 'H' are accepted too. */
		choice = tolower(choice);

		/* Valid choice: return it and exit the loop. */
		if (choice == 'e' || choice == 'm' || choice == 'h')
			return (choice);

		/* Invalid input: clear the rest of the line from the buffer. */
		while ((c = getchar()) != '\n' && c != EOF)
			;

		printf("Invalid choice. Please enter 'e', 'm', or 'h'.\n\n");
	}
}


/**
 * plural - returns "s" if n is not 1, otherwise an empty string.
 * @n: the count to check.
 *
 * Used to build grammatically correct messages like "1 trial" vs "3 trials".
 *
 * Return: "s" or "".
 */
static const char *plural(int n)
{
	if (n == 1)
		return ("");
	return ("s");
}



/**
 * play_round - runs one full round of the guessing game.
 * @difficulty: 'e', 'm', or 'h', set by choose_difficulty.
 * @player_name: the player's name, used in messages.
 *
 * Sets the range and trial count based on difficulty, picks a secret
 * number, then loops until the player guesses correctly or runs out
 * of trials. Hints are offered after each wrong guess while hints
 * remain.
 */

void play_round(char difficulty, char *player_name)
{
	int range_max;
	int trials;
	int secret;
	int hints_remaining = 3;
	int hints_taken = 0;
	int guess;
	char answer;
	int c;

	/* Step 1: set range and trials based on difficulty. */

	if (difficulty == 'e')
	{
		range_max = 100;
		trials = 7;
	}
	else if (difficulty == 'm')
	{
		range_max = 500;
		trials = 8;
	}
	else
	{
		range_max = 1000;
		trials = 9;
	}

	/* Step 2: pick the secret number in [1, range_max]. */
	secret = rand() % range_max + 1;

	/* Step 3: print the round rules. */
	printf("I have picked a number between 1 and %d.\n", range_max);
	printf("You have %d trials and %d hints.\n", trials, hints_remaining);

	/* Step 4: main game loop. Runs while the player has trials left. */
	while (trials > 0)
	{
		printf("\nYou have %d trial%s remaining and %d hint%s remaining.\n", trials, plural(trials), hints_remaining, plural(hints_remaining));
		printf("Enter your guess: ");

		/* Read the guess. If scanf fails, clear the buffer and re-ask. */
		if (scanf("%d", &guess) != 1)
		{
			while ((c = getchar()) != '\n' && c != EOF)
				;
			printf("Invalid input. Please enter a number.\n");
			continue;
		}

		/* Reject out-of-range guesses without consuming a trial. */
		if (guess < 1 || guess > range_max)
		{
			printf("Please enter a number between 1 and %d.\n", range_max);
			continue;
		}

		/* Valid guess: consume one trial. */
		trials--;

		/* Compare the guess to the secret number. */


		if (guess == secret)
		{
			printf("Congratulations, %s! Your guess is correct.\n", player_name);
			return;
		}
		else if (abs(guess - secret) <= 10)
		{
			if (guess > secret)
				printf("So close! Try a bit lower.\n");
			else
				printf("So close! Try a bit higher.\n");
		}
		else if (guess > secret)
		{
			printf("Your guess is too high. Please try again.\n");
		}
		else
		{
			printf("Your guess is too low. Please try again.\n");
		}
		/* Offer a hint if the player still has trials and hints. */
		if (trials > 1 && hints_remaining > 0)
		{
			while (1)
			{
				printf("Do you want a hint? (y/n) - costs 1 trial: ");
				scanf(" %c", &answer);

				/* Clear any leftover input after the character. */
				while ((c = getchar()) != '\n' && c != EOF)
					;

				if (answer == 'y' || answer == 'Y')
				{
					trials--;
					hints_remaining--;
					give_hint(secret, range_max, hints_taken);
					hints_taken++;
					break;
				}
				else if (answer == 'n' || answer == 'N')
				{
					break;
				}
				else
				{
					printf("Please answer 'y' or 'n'.\n");
				}
			}
		}
	}


	/* Step 5: player ran out of trials. */
	printf("Sorry, %s. The number was %d.\n", player_name, secret);
}

/**
 * is_prime - checks if a number is prime.
 * @n: the number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */

static int is_prime(int n)
{
	int i;

	if (n < 2)
		return (0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * count_digits - counts the number of digits in a positive integer.
 * @n: the number to count.
 *
 * Return: the number of digits.
 */

static int count_digits(int n)
{
	int count = 1;

	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

/**
 * give_hint - prints one hint about the secret number.
 * @secret: the number the player is trying to guess.
 * @range_max: the upper bound of the current difficulty range.
 * @hint_count: 0 for strong, 1 for medium, 2 for weak. Caller increments.
 *
 * Hints are grouped by strength. The strong group tries primality first
 * but falls back to the midpoint if the number isn't prime (so the hint
 * is always informative). Each hint is drawn at random within its group.
 */
void give_hint(int secret, int range_max, int hint_count)
{
	int pick;
	int midpoint;

	if (hint_count == 0)
	{
		/* Strong group: primality (only if prime) or midpoint. */
		pick = rand() % 2;

		if (pick == 0 && is_prime(secret))
		{
			printf("Here's a hint - the number is prime.\n");
		}
		else
		{
			midpoint = range_max / 2;

			if (secret > midpoint)
				printf("Here's a hint - the number is greater than %d.\n", midpoint);
			else
				printf("Here's a hint - the number is less than or equal to %d.\n", midpoint);
		}
	}
	else if (hint_count == 1)
	{
		/* Medium group: parity. */
		if (secret % 2 == 0)
			printf("Here's a hint - the number is even.\n");
		else
			printf("Here's a hint - the number is odd.\n");
	}
	else
	{
		/* Weak group: divisibility by 3 or digit count. */
		pick = rand() % 2;

		if (pick == 0)
		{
			if (secret % 3 == 0)
				printf("Here's a hint - the number is divisible by 3.\n");
			else
				printf("Here's a hint - the number is not divisible by 3.\n");
		}
		else
		{
			printf("Here's a hint - the number has %d digits.\n", count_digits(secret));
		}
	}
}
