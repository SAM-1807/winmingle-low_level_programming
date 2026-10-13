/**
 * 1-strdup - Duplicates a string into heap memory
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns a heap-allocated copy of a string.
 *
 * Return: Pointer to the copy, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string into heap memory
 * @str: The string to duplicate
 *
 * Return: Pointer to the copy, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
		len++;
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
