/**
 * 4-print_rev - Prints a string in reverse
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints a string in reverse followed by a new line.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;

	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
