/**
 * 1-strncat - Concatenates n bytes of src to dest
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Appends at most n bytes from src to dest.
 *
 * Return: Pointer to dest
 */

#include "main.h"

/**
 * _strncat - Concatenates n bytes of src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start;
	int i;

	start = dest;
	while (*dest != '\0')
		dest++;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (start);
}
