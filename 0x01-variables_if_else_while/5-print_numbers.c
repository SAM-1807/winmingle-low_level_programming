/**
 * Print_numbers - Prints single-digit numbers
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints all single-digit numbers of base 10 starting from 0.
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
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
