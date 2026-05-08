#include "main.h"

void times_table(void)
{
	int column;
	int row = 0;
	int row_column;

	while(row <= 9)    {
		column = 0;
		while(column <= 9)    {
			row_column = row * column;
			if(row_column < 10)    {
				_putchar(row_column + '0');
			}
			else    {
				_putchar((row_column / 10) + '0');
				_putchar((row_column % 10) + '0');
			}
			if(column < 9)    {
				_putchar(',');
				_putchar(' ');
			}
			column++;
		}
		_putchar('\n');
		row++;
	}
}


