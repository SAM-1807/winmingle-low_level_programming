/**
 * 3-print_numbers - Prints numbers 0 to 9
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints single-digit numbers using _putchar.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
