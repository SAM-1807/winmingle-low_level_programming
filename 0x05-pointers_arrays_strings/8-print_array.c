/**
 * 8-print_array - Prints n elements of an array
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints n integers from an array separated by commas.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: The array
 * @n: The number of elements
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;
	int num;

	i = 0;
	while (i < n)
	{
		num = a[i];
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		if (num < 10)
			_putchar(num + '0');
		else if (num < 100)
		{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		else if (num < 1000)
		{
			_putchar(num / 100 + '0');
			_putchar(num / 10 % 10 + '0');
			_putchar(num % 10 + '0');
		}
		else
		{
			_putchar(num / 1000 + '0');
			_putchar(num / 100 % 10 + '0');
			_putchar(num / 10 % 10 + '0');
			_putchar(num % 10 + '0');
		}
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	_putchar('\n');
}
