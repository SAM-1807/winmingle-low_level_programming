/**
 * 10-print_triangle - Prints a triangle of # characters
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints a right-aligned triangle of size lines.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle of # characters
 * @size: The size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row;
	int count;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 1;
	while (row <= size)
	{
		count = size - row;
		while (count > 0)
		{
			_putchar(' ');
			count--;
		}
		count = row;
		while (count > 0)
		{
			_putchar('#');
			count--;
		}
		_putchar('\n');
		row++;
	}
}
