/**
 * 10-atoi - Converts a string to an integer
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Converts a string to an integer.
 *
 * Return: The integer value
 */

#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value
 */
int _atoi(char *s)
{
	int sign;
	int result;

	sign = 1;
	result = 0;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
