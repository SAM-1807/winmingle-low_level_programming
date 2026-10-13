/**
 * 6-cap_string - Capitalizes words in a string
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Capitalizes the first letter of each word.
 *
 * Return: Pointer to the string
 */

#include "main.h"

/**
 * is_sep - Checks if a character is a word separator
 * @c: The character
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';')
		return (1);
	if (c == '.' || c == '!' || c == '?' || c == '"' || c == '(')
		return (1);
	if (c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}

/**
 * cap_string - Capitalizes words in a string
 * @s: The string
 *
 * Return: Pointer to the string
 */
char *cap_string(char *s)
{
	int i;
	int prev_sep;

	i = 0;
	prev_sep = 1;
	while (s[i] != '\0')
	{
		if (prev_sep && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		prev_sep = is_sep(s[i]);
		i++;
	}
	return (s);
}
