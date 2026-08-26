#include "main.h"

void puts2(char *str)
{
	while(*str != 0)    {
		if(*str % 2 == 0)    {
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
#include <unistd.h>

int _putchar(char c)
{
	return(write(1, &c, 1));
}
