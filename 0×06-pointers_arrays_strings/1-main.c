#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[98] = "Hello";
	char s2[] = "World!\n";
	char *ptr;
	(void)ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	return (0);
}
