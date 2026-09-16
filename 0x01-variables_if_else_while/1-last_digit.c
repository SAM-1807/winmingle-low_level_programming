/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints the last digit of a random number n.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;
	int x;
	srand(time(0));
	n = rand() - (RAND_MAX/2);
	x = n % 10;

	if(x < 5 && x > 0)    {
		printf("Last digit of %d is %d and is less than 5 but not 0\n", n, x);
	}

	else if(x > 5)    {
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	}

	else if(x == 0)    {
		printf("Last digit of %d is %d\n", n, x);
	}
	else if(x > 0 && x < 6)    {
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	return(0);
}
