#include "main.h"
#include <stdio.h>

int main(void)
{
	char s[] = "ROT13 (rotate by 13 places)";
	char *p;

	p = rot13(s);
	printf("%s\n", p);
	printf("%s\n", rot13(s));
	return (0);
}
