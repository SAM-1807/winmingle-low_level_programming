#include <stdio.h>
#include "main.h"

int main(void)
{
	int result;

	result = largest_number(1, 2, 3);
	printf("Largest of 1, 2, 3 is %d\n", result);

	result = largest_number(0, 0, 0);
	printf("Largest of 0, 0, 0 is %d\n", result);

	result = largest_number(5, 5, 3);
	printf("Largest of 5, 5, 3 is %d\n", result);

	result = largest_number(-1, -2, -3);
	printf("Largest of -1, -2, -3 is %d\n", result);

	return (0);
}	
