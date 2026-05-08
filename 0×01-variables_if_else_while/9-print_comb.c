/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints all possible single-digit numbers separated by commas and spaces, excluding the last single digit.
 */

#include <stdio.h>
int main(void)
{
	int digit = 0;

	while(digit <=9)    {
		printf("%d", digit);
		if(digit != 9)
			printf(", ");
		digit++;
	}
	putchar('\n');
	return (0);
}
