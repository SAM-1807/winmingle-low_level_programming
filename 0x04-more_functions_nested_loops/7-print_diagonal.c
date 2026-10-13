/**
 * 7-print_diagonal - Draws a diagonal line
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints a diagonal line of n backslashes.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of lines
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
