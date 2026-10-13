/**
 * Print_numberz - Prints single-digit numbers using putchar
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints single-digit numbers of base 10 using only putchar.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
