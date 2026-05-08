/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints the alphabet in lowercase except letters q and e, followed by a new line. 
 */

#include <stdio.h>
int main(void)
{
	char letter;
	letter = 'a';

	while(letter <= 'z')    {
		if(letter != 'e' && letter != 'q')    {
		putchar(letter);
		}
			letter++;
	}
	putchar('\n');
	return (0);
}
