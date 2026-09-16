#include "main.h"

void print_rev(char *s)
{
	char *ptr = s;

	/* 1. Go to the end of the string */
	while (*ptr != '\0')
		ptr++;

	/* 2. Step back to the last character */
	ptr--;

	/* 3. Print backwards */
	while (ptr >= s)
	{
		_putchar(*ptr);
		ptr--;
	}

	_putchar('\n');
}

#include <unistd.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}
