#include "main.h"

void print_array(int *a, int n)
{
	int i = 0;
	int num;

	while(i < n)    {
		num = *a;
		if(num < 0)    {
			_putchar('-');
			num = -num;
		}
		//checks if the number is negative and prints it.
	
		if(num >= 0 && num < 10)    {
			_putchar(num + '0');
		}

		else if(num > 9 && num < 100)    {
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}

		else if(num > 99 && num < 1000)    {
			_putchar(num / 100 + '0');
			_putchar(num / 10 % 10 + '0');
			_putchar(num % 10 + '0');
		}
		else if(num > 999)    {
			_putchar(num / 1000 + '0');
			_putchar(num / 100 % 10 + '0');
			_putchar(num / 10 % 10 + '0');
			_putchar(num % 10 + '0');
		}

		if(i != (n-1))    {
			_putchar(',');
			_putchar(' ');
		}
		a++;
		i++;
	}
	_putchar('\n');
	return;
}

#include <unistd.h>

int _putchar(char c)
{
	return(write( 1, &c, 1));
}

