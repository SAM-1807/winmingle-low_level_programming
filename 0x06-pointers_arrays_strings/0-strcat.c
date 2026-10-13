/**
 * 0-strcat - Concatenates two strings
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Appends src to dest, overwriting the null byte.
 *
 * Return: Pointer to dest
 */

#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *start;

	start = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
