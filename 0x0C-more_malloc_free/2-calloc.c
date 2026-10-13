/**
 * 2-calloc - Allocates memory for an array
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Reimplementation of calloc using malloc.
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, initialized to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
