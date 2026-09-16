#include "main.h"

/**
 * strpbrk - finds the first occurrence in s of any byte from accept.
 * @s: the string to search.
 * @accept: the set of bytes to look for.
 *
 * Return: a pointer to the first matching byte, or NULL if none found.
 */
char *strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
