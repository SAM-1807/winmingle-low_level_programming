#include <stdio.h>

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
	printf("%ld, %ld", a, b);
	i = 3;
	while (i <= 50)
	{
		next = a + b;
		printf(", %ld", next);
		a = b;
		b = next;
		i++;
	}
	printf("\n");
	return (0);
}
