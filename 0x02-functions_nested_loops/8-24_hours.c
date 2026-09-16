#include "main.h"

void jack_bauer(void)
{
	int first = 0;
	int first_tens;
	int first_ones;
	int second;
	int second_tens;
	int second_ones;

	while(first <= 23)    {
		second = 0;
		while(second <= 59)    {
			first_tens = first / 10;
			first_ones = first % 10;
			_putchar(first_tens + '0');
			_putchar(first_ones + '0');
			_putchar(':');

			second_tens = second / 10;
			second_ones = second % 10;
			_putchar(second_tens + '0');
			_putchar(second_ones + '0');
			_putchar('\n');
			second++;
		}
		first++;
	}
}

