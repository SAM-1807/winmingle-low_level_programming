/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints the lowercase alphabet in reverse order.
 */

#include <stdio.h>
int main(void)
{
	char letter;
	letter = 'z';

	while(letter >= 'a')    {
	putchar(letter);
	letter--;
	}
	putchar('\n');
	return (0);
}
