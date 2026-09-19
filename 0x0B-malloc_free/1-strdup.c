#include "main.h"

char *_strdup(char *str)
{
	char *copy;
	unsigned int len;
	unsigned int i;

	if(str == NULL)
		return(NULL);

	len = 0;
	while(str[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if(copy == NULL)
		return(NULL);

	i = 0;
	while(i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[len] = '\0';

	return (copy);
}


