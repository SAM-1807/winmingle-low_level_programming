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
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a;
	long b;
	long next;
	int i;

	a = 1;
	b = 2;
	print_long(a);
	_putchar(',');
	_putchar(' ');
	print_long(b);
	i = 3;
	while (i <= 50)
	{
		next = a + b;
		_putchar(',');
		_putchar(' ');
		print_long(next);
		a = b;
		b = next;
		i++;
	}
	_putchar('\n');
	return (0);
}
