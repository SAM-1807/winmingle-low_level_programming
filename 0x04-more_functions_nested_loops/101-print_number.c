#include "main.h"

void print_number(int n)
{
	int divisor = 1;
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Find the largest divisor (1, 10, 100, 1000, ...) <= n */
	while (n / divisor >= 10)
		divisor *= 10;

	/* Extract and print each digit from left to right */
	while (divisor >= 1)
	{
		digit = (n / divisor) % 10;
		_putchar(digit + '0');
		divisor /= 10;
	}
}
