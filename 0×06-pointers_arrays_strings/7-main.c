#include "main.h"
#include <stdio.h>

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	return (0);
}
