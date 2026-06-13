#include "main.h"

void _puts(char *str)

{
	while(*str != '\0')    {
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
