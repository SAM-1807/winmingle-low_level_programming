#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Return: Nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * main - Sums multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	print_number(sum);
	_putchar('\n');
	return (0);
}
