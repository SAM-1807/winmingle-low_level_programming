/**
 * Print_base16 - Prints all hexadecimal digits
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints all numbers of base 16 in lowercase, then a new line.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
