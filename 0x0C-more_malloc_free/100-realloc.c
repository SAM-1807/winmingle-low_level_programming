/**
 * 100-realloc - Reallocates a memory block
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Reimplementation of realloc using malloc and free.
 *
 * Return: Pointer to the new block, or NULL
 */

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the old block
 * @old_size: Size of the old block
 * @new_size: Size of the new block
 *
 * Return: Pointer to the new block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;
	unsigned int copy_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	copy_size = old_size < new_size ? old_size : new_size;
	i = 0;
	while (i < copy_size)
	{
		new_ptr[i] = old_ptr[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
