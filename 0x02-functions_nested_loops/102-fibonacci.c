#include <stdio.h>

int main(void)

{
	int n = 1;
	long previous = 1;
	long current = 2;
	long next;

	printf("%ld, ", previous);
	n++;

	printf("%ld, ", current);
	n++;


	while(n <= 50)    {
		next = previous + current;
		printf("%ld", next);
		previous = current;
		current = next;


		if(n < 50)    {
			printf(", ");
		}
		n++;
	}
	putchar('\n');
	return (0);
}
