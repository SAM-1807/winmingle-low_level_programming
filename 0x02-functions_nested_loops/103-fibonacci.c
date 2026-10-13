#include "main.h"

/**
 * print_long - Prints a long integer using _putchar
 * @n: The long integer to print
 *
 * Return: Nothing
 */
void print_long(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_long(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * main - Sums even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a;
	long b;
	long next;
	long sum;

	a = 1;
	b = 2;
	sum = 0;
	while (b <= 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		next = a + b;
		a = b;
		b = next;
	}
	print_long(sum);
	_putchar('\n');
	return (0);
}
