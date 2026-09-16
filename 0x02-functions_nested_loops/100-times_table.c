#include "main.h"

void print_times_table(int n)
{
	int row;
	int column;
	int result;

	if (n > 15 || n < 0)
		return;

	row = 0;
	while (row <= n)
	{
		column = 0;
		while (column <= n)
		{
			result = row * column;

			if (result < 10)
			{
				if (column != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}

			if (column < n)
			{
				_putchar(',');
				_putchar(' ');
			}

			column++;
		}
		_putchar('\n');
		row++;
	}
}
