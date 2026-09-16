#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str = "My first strlen!";
	int len = _strlen(str);
	printf("%d\n", len);

	return (0);
}
