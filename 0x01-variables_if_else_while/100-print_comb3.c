/**
 * Print_comb3 - Prints combinations of two digits
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints all different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 8)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 8 && j == 9))
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
