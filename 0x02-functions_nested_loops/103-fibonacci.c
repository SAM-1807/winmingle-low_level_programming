#include <stdio.h>

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
	printf("%ld\n", sum);
	return (0);
}
