/**
 * 0-malloc_checked - Allocates memory using malloc
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Allocates memory, exits with 98 on failure.
 *
 * Return: Pointer to the allocated memory
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
