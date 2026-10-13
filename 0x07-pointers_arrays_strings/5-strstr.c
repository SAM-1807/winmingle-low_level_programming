/**
 * 5-strstr - Locates a substring
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Finds the first occurrence of needle in haystack.
 *
 * Return: Pointer to start of match, or NULL
 */

#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: Pointer to start of match, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
		return (haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (0);
}
