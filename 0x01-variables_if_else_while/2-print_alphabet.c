/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints the alphabets in lowercase, followed by a new line.
 */

#include <stdio.h>
int main(void)
{
	char letter;
	letter = 'a';
	
	while(letter <= 'z')    {
		putchar(letter);
	letter++;
	}

	putchar('\n');
	return (0);
}
