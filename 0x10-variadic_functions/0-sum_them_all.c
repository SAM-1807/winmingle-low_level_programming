/**
 * 0-sum_them_all - Sums all its parameters
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Returns the sum of all its parameters.
 *
 * Return: The sum, or 0 if n is 0
 */

#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters
 * @n: The number of arguments
 *
 * Return: The sum, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int total = 0;
	unsigned int track = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (track < n)
	{
		track++;
		total += va_arg(args, int);
	}

	va_end(args);
	return (total);
}
