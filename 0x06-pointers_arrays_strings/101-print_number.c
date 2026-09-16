#include "main.h"
void print_number(int n)
{
	int divisor = 1;

	if(n < 0)    {
		_putchar('-');
		n = -n;
	}
	if(n == 0)    {
		_putchar('0');
		return;
	}
	while(divisor * 10 <= n)
		divisor = divisor * 10;

	while(divisor >= 1)    {
		_putchar((n / divisor) % 10 + '0');
		divisor = divisor / 10;
	}
}
