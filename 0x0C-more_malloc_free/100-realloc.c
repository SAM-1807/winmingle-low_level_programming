#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;
	unsigned char *src;
	unsigned char *dst;
	unsigned int copy_size;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	result = malloc(new_size);
	if (result == NULL)
		return (NULL);

	if (old_size < new_size)
		copy_size = old_size;
	else
		copy_size = new_size;

	src = ptr;
	dst = result;
	for (i = 0; i < copy_size; i++)
		dst[i] = src[i];

	free(ptr);
	return (result);
}
