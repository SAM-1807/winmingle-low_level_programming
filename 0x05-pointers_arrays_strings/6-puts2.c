/**
 * 6-puts2 - Prints every other character of a string
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints every other character starting from the first.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to print
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
