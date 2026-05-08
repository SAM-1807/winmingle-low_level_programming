/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints all possible different combinations of three digits.
 */

#include <stdio.h>
int main(void)
{
	int first=0;
	int  second;
	int third;

	while(first <=7)    {
		second = first + 1;
			while(second <= 8)    {
				third = second + 1;
					while(third <= 9)    {
					putchar(first + '0');
				putchar(second + '0');
				putchar(third + '0');
			if(!(first == 7 && second == 8 && third == 9))    {
				putchar(',');
				putchar(' ');
			}
			third++;
			}
		second++;
	}
	first++;
	}
	putchar('\n');
	return(0);
}
