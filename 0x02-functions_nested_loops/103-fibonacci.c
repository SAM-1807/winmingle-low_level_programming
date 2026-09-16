#include <stdio.h>

int main(void)

{
	int previous = 1;
	int current = 2;
	int next;
	int sum = 0;


	while(current <= 4000000)   {

		next = previous + current;

		if(current % 2 == 0)

			sum = current + sum;
		previous = current;
		current = next;

	}	
	printf("%d\n", sum);

	return (0);
}

