/**
 * 4-print_most_numbers - Prints numbers 0 to 9 except 2 and 4
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints numbers 0 to 9 excluding 2 and 4.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9 except 2 and 4
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
