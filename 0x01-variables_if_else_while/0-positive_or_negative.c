/**
 * Positive_or_negative - Checks the sign of a random number
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints whether a random number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
