/**
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: This is a program that prints all the numbers of base 16 in lowercase.
 */

#include <stdio.h>
int main(void)
{
	char base16_digits = '0';
	char base16_letters = 'a';

	while(base16_digits <= '9')    {
		putchar(base16_digits);
		base16_digits++;
	}

	while(base16_letters <= 'f')    {
			putchar(base16_letters);
		base16_letters++;
	}
	putchar('\n');
	return (0);
}
