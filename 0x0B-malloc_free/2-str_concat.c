/**
 * 2-str_concat - Concatenates two strings into a new buffer
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Allocates a new string with s1 followed by s2.
 *
 * Return: Pointer to the new string, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a new buffer
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		result[len1 + i] = s2[i];
		i++;
	}
	result[len1 + len2] = '\0';
	return (result);
}
