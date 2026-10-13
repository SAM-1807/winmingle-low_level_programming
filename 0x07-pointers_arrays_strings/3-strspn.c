/**
 * 3-strspn - Returns length of matching prefix
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns the length of the prefix of s that matches accept.
 *
 * Return: Length of matched prefix
 */

#include "main.h"

/**
 * _strspn - Returns the length of a prefix substring
 * @s: The string
 * @accept: The set of accepted characters
 *
 * Return: Length of matched prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i;
	int found;

	count = 0;
	while (s[count] != '\0')
	{
		i = 0;
		found = 0;
		while (accept[i] != '\0')
		{
			if (s[count] == accept[i])
			{
				found = 1;
				break;
			}
			i++;
		}
		if (!found)
			break;
		count++;
	}
	return (count);
}
