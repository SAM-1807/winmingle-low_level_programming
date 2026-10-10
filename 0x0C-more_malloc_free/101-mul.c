#include "main.h"

/**
 * print_error - prints "Error\n" and exits with status 98.
 */
static void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * is_valid_number - checks if a string contains only digits.
 * @s: the string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
static int is_valid_number(char *s)
{
	int i = 0;

	if (s[0] == '\0')
		return (0);

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * string_length - returns the length of a string.
 * @s: the string.
 *
 * Return: the number of characters.
 */
static int string_length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * print_result - prints the result array, skipping leading zeros.
 * @digits: the array of digits.
 * @len: the length of the array.
 */
static void print_result(int *digits, int len)
{
	int i = 0;
	int started = 0;

	while (i < len && digits[i] == 0)
		i++;

	if (i == len)
	{
		_putchar('0');
	}
	else
	{
		while (i < len)
		{
			_putchar(digits[i] + '0');
			i++;
		}
		started = 1;
	}
	(void)started;
	_putchar('\n');
}

int main(int argc, char *argv[])
{
	int len1;
	int len2;
	int *result;
	int i;
	int j;
	int carry;

	if (argc != 3)
		print_error();

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
		print_error();

	len1 = string_length(argv[1]);
	len2 = string_length(argv[2]);

	result = malloc((len1 + len2) * sizeof(int));
	if (result == NULL)
		exit(98);

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int d1 = argv[1][i] - '0';
			int d2 = argv[2][j] - '0';

			result[i + j + 1] += d1 * d2;
		}
	}

	for (i = len1 + len2 - 1; i > 0; i--)
	{
		carry = result[i] / 10;
		result[i] = result[i] % 10;
		result[i - 1] += carry;
	}

	print_result(result, len1 + len2);

	free(result);
	return (0);
}
