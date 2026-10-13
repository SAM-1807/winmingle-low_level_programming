/**
 * Print_comb5 - Prints combinations of two two-digit numbers
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints all combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
