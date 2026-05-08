/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints all single-digit numbers of base 10 starting from 0. No space or commas in between.
 */

#include <stdio.h>
int main(void)
{
	int digit;
	digit = '0';

	while(digit <= '9')    {
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return(0);
}
