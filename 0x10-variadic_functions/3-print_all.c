/**
 * 3-print_all - Prints anything
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Prints arguments based on a format string.
 *
 * Return: Nothing
 */

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @args: The va_list
 *
 * Return: Nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an int
 * @args: The va_list
 *
 * Return: Nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: The va_list
 *
 * Return: Nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 * @args: The va_list
 *
 * Return: Nothing
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - Prints anything based on a format string
 * @format: The format string
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	printer_t printers[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	char *sep = "";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (printers[j].symbol != NULL)
		{
			if (format[i] == printers[j].symbol[0])
			{
				printf("%s", sep);
				printers[j].print(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
