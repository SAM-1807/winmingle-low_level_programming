/**
 * 8-print_square - Draws a square of # characters
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints a square of size x size using # characters.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_square - Draws a square of # characters
 * @size: The side length of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
