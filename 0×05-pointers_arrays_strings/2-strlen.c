#include "main.h"

int _strlen(char *s)
{
	int counter = 0;

	while(!(*s == '\0'))    {
		s++;
		counter++;	

	}
	return(counter);

}

