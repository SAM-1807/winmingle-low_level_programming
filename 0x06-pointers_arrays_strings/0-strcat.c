#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of dest */
	while (*ptr != '\0')
		ptr++;

	/* Copy src to the end of dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add null terminator */
	*ptr = '\0';

	return (dest);
}
