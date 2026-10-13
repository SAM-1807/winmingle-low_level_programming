/**
 * Print_alphabets - Prints lowercase then uppercase alphabet
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints lowercase then uppercase alphabet, then a new line.
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
		putchar(c);
		c++;
	}

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
