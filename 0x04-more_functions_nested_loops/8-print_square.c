#include "main.h"

void print_square(int size)
{
	int i;
	int j;

	if(size < 1)    {
		_putchar('\n');
		return;
	}

	if(size > 0)    {

		for(i = 0; i < size; i++)    {
			for(j = 0; j < size; j++)    {
				_putchar('#');
			}
			_putchar('\n');
		}

	}
	_putchar('\n');
	return;
}
