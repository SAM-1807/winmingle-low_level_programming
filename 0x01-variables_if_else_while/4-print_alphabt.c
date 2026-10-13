/**
 * Print_alphabt - Prints the alphabet except e and q
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints lowercase alphabet except 'e' and 'q', then a new line.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
