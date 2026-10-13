/**
 * 100-prime_factor - Finds the largest prime factor
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints the largest prime factor of 612852475143.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n;
	long factor;
	long largest;

	n = 612852475143;
	factor = 2;
	largest = 1;

	while (factor * factor <= n)
	{
		if (n % factor == 0)
		{
			largest = factor;
			while (n % factor == 0)
				n /= factor;
		}
		factor++;
	}
	if (n > 1)
		largest = n;

	printf("%ld\n", largest);
	return (0);
}
