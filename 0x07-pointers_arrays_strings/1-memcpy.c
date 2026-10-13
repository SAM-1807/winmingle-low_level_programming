/**
 * 1-memcpy - Copies a memory area
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Copies n bytes from src to dest.
 *
 * Return: Pointer to dest
 */

#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Destination buffer
 * @src: Source buffer
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
