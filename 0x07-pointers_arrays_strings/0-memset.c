/**
 * 0-memset - Fills memory with a constant byte
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Fills the first n bytes of s with byte b.
 *
 * Return: Pointer to s
 */

#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The memory area
 * @b: The byte to fill with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
