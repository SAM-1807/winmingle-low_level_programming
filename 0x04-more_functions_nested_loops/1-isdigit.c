/**
 * 1-isdigit - Checks for a digit (0 through 9)
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns 1 if c is a digit, 0 otherwise.
 *
 * Return: 1 if digit, 0 otherwise
 */

#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
