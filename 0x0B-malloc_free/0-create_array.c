#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if(size == 0)
		return(NULL);

	buffer = malloc(size);
	if(buffer == 0)
		return(NULL);

	i = 0;
	while(i < size)
	{
		buffer[i] = c;
		i++;
	}

	return(buffer);
}		
