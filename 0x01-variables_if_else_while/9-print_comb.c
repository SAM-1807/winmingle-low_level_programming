/**
 * Print_comb - Prints single-digit combinations
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints all single-digit numbers separated by comma and space.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
