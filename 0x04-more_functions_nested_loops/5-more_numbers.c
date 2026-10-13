/**
 * 5-more_numbers - Prints 0 to 14 ten times
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints numbers 0 to 14, ten times, using _putchar.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * more_numbers - Prints 0 to 14 ten times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i;
	int n;

	i = 0;
	while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
