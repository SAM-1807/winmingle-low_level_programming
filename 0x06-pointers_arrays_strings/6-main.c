#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "expect the best. prepare for the worst. capitalize on what comes.\nhello world!";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	return (0);
}
