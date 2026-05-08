/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints all single-digit numbers of base 10 starting from 0 without using char variables. No spaces or commas in between them.
 */

#include <stdio.h>
int main(void)
{
	int digit = 0;
	while(digit  <= 9)    {
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
