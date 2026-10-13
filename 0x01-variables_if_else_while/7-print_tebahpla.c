/**
 * Print_tebahpla - Prints the alphabet in reverse
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
