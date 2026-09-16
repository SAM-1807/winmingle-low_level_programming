#include "main.h"

/**
 * _strstr - locates a substring needle inside haystack.
 * @haystack: the string to search.
 * @needle: the substring to look for.
 *
 * Return: a pointer to the start of the match, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
