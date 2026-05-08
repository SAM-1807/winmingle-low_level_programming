#include <stdio.h>

int main(void)
{
	int n = 1;
	unsigned long previous = 1;
	unsigned long current = 2;
	unsigned long next;

	printf("%lu, %lu, ", previous, current);
	n++;


	while(n <= 98)    {
		next = previous + current;
		printf("%lu", next);

		previous = current;
		current = next;


		if(n < 98)    {
			printf(", ");
		}
		else    {
			putchar('\n');
		}
		n++;
	}
	return (0);
}
