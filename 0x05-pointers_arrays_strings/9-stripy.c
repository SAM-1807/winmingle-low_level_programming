/**
 * 9-stripy - Copies a string
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Copies the string src into dest.
 *
 * Return: Pointer to dest
 */

#include "main.h"

/**
 * _strcpy - Copies a string from src to dest
 * @dest: The destination buffer
 * @src: The source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
