/**
 * 5-rev_string - Reverses a string in place
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Reverses the string s in place.
 *
 * Return: Nothing
 */

#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: The string to reverse
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len;
	int first;
	int last;
	char temp;

	len = 0;
	while (s[len] != '\0')
		len++;

	first = 0;
	last = len - 1;
	while (first < last)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;
		first++;
		last--;
	}
}
