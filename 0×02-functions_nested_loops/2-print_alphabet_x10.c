#include "main.h"

void print_alphabet_x10 (void)

{
int count = 1;
while(count <= 10)    {
	char c = 'a';
	while(c <= 'z')    {
		_putchar(c);
		c++;
	}
	_putchar('\n');
	count++;
}

_putchar('\n');
return;
}
