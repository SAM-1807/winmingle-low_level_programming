#include <stdio.h>

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
	printf("%lu, %lu", a, b);
	i = 3;
	while (i <= 98)
	{
		next = a + b;
		printf(", %lu", next);
		a = b;
		b = next;
		i++;
	}
	printf("\n");
	return (0);
}
