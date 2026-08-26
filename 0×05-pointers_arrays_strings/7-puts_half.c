#include "main.h"

void puts_half(char *str)
{
	int len = 0;
	int start;
	char *ptr = str;

	/* Compute the length of the string */
	while (*ptr != '\0')
	{
		len++;
		ptr++;
	}

	/* Calculate the starting index for the second half */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;

	/* Move str to the starting position */
	str += start;

	/* Print the second half */
	while (*str != '\0')
	{
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
