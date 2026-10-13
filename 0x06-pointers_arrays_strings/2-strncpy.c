/**
 * 2-strncpy - Copies n bytes of a string
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Copies up to n bytes from src to dest.
 *
 * Return: Pointer to dest
 */

#include "main.h"

/**
 * _strncpy - Copies n bytes of a string
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
