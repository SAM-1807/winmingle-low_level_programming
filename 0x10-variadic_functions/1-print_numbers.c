/**
 * 1-print_numbers - 
 * Author:
 * Program:
 * Description:
 *
 */

#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int track = 0;

	va_start(args, n);
	while(track < n)
	{
		printf("%d", va_arg(args, int));
	if(separator != NULL && track < n - 1)
		printf("%s", separator);
		track++;
	}
	printf("\n");
	va_end(args);
}

