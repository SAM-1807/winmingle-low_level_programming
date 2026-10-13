#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: Starting number
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		print_number(n);
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
	print_number(98);
	_putchar('\n');
}
