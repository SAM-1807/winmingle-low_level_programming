#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: The size of the table
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n < 0 || n > 15)
		return;
	i = 0;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			result = i * j;
			if (j == 0)
				_putchar(result + '0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				else if (result < 100)
					_putchar(' ');
				if (result >= 100)
					_putchar(result / 100 + '0');
				if (result >= 10)
					_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
