#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *byte_ptr;
	unsigned int total;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	byte_ptr = ptr;
	for (i = 0; i < total; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
