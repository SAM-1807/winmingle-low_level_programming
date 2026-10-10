#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if(malloc(b) == NULL)
		exit(98);
	return(ptr);
}
