/**
 * 101-print_number - Prints an integer using _putchar
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints any integer using only _putchar.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int abs_n;
	int divisor;

	divisor = 1;
	if (n < 0)
	{
		_putchar('-');
		abs_n = (unsigned int)(-n);
	}
	else
	{
		abs_n = (unsigned int)n;
	}

	while (abs_n / divisor >= 10)
		divisor = divisor * 10;

	while (divisor >= 1)
	{
		_putchar((abs_n / divisor) % 10 + '0');
		divisor = divisor / 10;
	}
}
