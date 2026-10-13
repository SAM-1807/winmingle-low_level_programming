/**
 * 101-mul - Multiplies two positive numbers
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Multiplies two base-10 numbers of arbitrary size.
 *
 * Return: Always 0 (Success), or 98 on error
 */

#include "main.h"
#include <stdlib.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 *
 * Return: On success 1
 */
int _putchar(char c);

/**
 * print_error - Prints Error and exits 98
 *
 * Return: Nothing
 */
void print_error(void)
{
	int i;
	char *msg;

	msg = "Error\n";
	i = 0;
	while (msg[i] != '\0')
	{
		_putchar(msg[i]);
		i++;
	}
	exit(98);
}

/**
 * is_digit - Checks if a string is all digits
 * @s: The string
 *
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * str_len - Returns the length of a string
 * @s: The string
 *
 * Return: Length of s
 */
int str_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * main - Multiplies two positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success), or 98 on error
 */
int main(int argc, char *argv[])
{
	int *result;
	int len1;
	int len2;
	int i;
	int j;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();
	len1 = str_len(argv[1]);
	len2 = str_len(argv[2]);
	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
		exit(98);
	i = 0;
	while (i < len1 + len2)
		result[i++] = 0;
	i = len1 - 1;
	while (i >= 0)
	{
		j = len2 - 1;
		while (j >= 0)
		{
			result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
			j--;
		}
		i--;
	}
	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
		i++;
	while (i < len1 + len2)
		_putchar(result[i++] + '0');
	_putchar('\n');
	free(result);
	return (0);
}
