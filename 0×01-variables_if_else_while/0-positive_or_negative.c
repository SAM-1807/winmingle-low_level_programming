/**
 * Author: Agbai Samuel
 * Program: WinMingle Community C Training
 * Description: This is a program that generates a random number and prints whether it is positive, negative or zero each time it runs.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n;
		srand(time(0));    /*Seeds the random number generator with the current system time. */
		n=rand() - RAND_MAX/2;    /*Generates a random number which can be either positive, zero or negative. */
		if(n>0)
			printf("%d is positive\n", n);    /*Checks if theumber is positive, ignores if not. */
		else if(n==0)    /*Checks if the number is zero, ignores if not. */
			printf("%d is zero\n", n);
		else    /*Checks if the number is negative, ignores if not. */
			printf("%d is negative\n", n);
	return (0);
}
