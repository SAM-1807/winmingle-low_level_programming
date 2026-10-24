/**
 * 2-print_strings - Prints strings followed by a new line
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints strings separated by a given separator.
 *
 * Return: Nothing
 */

#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a separator
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int track = 0;
	char *str;

	va_start(args, n);

	while (track < n)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && track < n - 1)
			printf("%s", separator);

		track++;
	}

	printf("\n");
	va_end(args);
}
