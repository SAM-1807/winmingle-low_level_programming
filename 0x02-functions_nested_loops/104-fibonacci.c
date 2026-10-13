#include "main.h"

/**
 * print_ulong - Prints an unsigned long using _putchar
 * @n: The unsigned long to print
 *
 * Return: Nothing
 */
void print_ulong(unsigned long n)
{
	if (n / 10)
		print_ulong(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long next;
	int i;

	a = 1;
	b = 2;
	print_ulong(a);
	_putchar(',');
	_putchar(' ');
	print_ulong(b);
	i = 3;
	while (i <= 98)
	{
		next = a + b;
		_putchar(',');
		_putchar(' ');
		print_ulong(next);
		a = b;
		b = next;
		i++;
	}
	_putchar('\n');
	return (0);
}
