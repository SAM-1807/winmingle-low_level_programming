#include "main.h"

char *strncat(char *dest, char *src, int n)
{

	char *ptr = dest;
	while(*ptr != '\0')
		ptr++;
	while(n > 0 && *src != '\0')    {
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return dest;
}
