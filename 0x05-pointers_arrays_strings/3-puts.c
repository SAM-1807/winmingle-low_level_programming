/**
 * 3-puts - Prints a string followed by a new line
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints a string to stdout using _putchar.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to print
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
