/**
 * 4-add - Adds positive numbers
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Adds positive integers passed as arguments.
 *
 * Return: Always 0 (Success), or 1 on error
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit_string - Checks if a string contains only digits
 * @s: The string to check
 *
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Adds positive numbers from arguments
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: Always 0 (Success), or 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (!is_digit_string(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
