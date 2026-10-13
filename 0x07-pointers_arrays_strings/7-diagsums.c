/**
 * 7-diagsums - Prints the sum of two diagonals of a square matrix
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints the sums of the main and secondary diagonals.
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

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * @a: The matrix as a flat array
 * @size: Size of the matrix (size x size)
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	long sum1;
	long sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;
	while (i < size)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
		i++;
	}
	print_number((int)sum1);
	_putchar(',');
	_putchar(' ');
	print_number((int)sum2);
	_putchar('\n');
}
