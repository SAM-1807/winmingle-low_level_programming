/**
 * 9-fizz_buzz - Prints FizzBuzz for 1 to 100
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints FizzBuzz sequence from 1 to 100.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

/**
 * main - Prints FizzBuzz for numbers 1 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
