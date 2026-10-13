/**
 * 2-strchr - Locates a character in a string
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns a pointer to the first occurrence of c in s.
 *
 * Return: Pointer to first occurrence of c, or NULL
 */

#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: The character to find
 *
 * Return: Pointer to first occurrence of c, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
