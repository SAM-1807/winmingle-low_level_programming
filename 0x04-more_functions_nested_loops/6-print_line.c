/**
 * 6-print_line - Draws a straight line of underscores
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints n underscores followed by a new line.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of underscores to print
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
