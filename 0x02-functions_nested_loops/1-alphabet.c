#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
