/**
 * 1-string_nconcat - Concatenates s1 with the first n bytes of s2
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Allocates a string with s1 followed by n bytes of s2.
 *
 * Return: Pointer to the new string, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates s1 with the first n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum bytes to take from s2
 *
 * Return: Pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= len2)
		n = len2;
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		result[len1 + i] = s2[i];
		i++;
	}
	result[len1 + n] = '\0';
	return (result);
}
