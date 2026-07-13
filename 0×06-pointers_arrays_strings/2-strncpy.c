#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	while(n > 0 && *src != '\0')    {
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	while(n > 0)    {
		*ptr = '\0';
		ptr++;
		n--;
	}
	return dest;
}
