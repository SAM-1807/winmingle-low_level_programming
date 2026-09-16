#include "main.h"

void more_numbers(void)
{
	int i;
	int print = 1;

	while(print < 11)    {
		i = 0;
		while(i < 15)    {
			if(i > 9)    
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');	
			i++;
		}
		_putchar('\n');
		print++;
	}
	return;
}

