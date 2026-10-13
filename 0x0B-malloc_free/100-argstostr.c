/**
 * 100-argstostr - Concatenates program arguments into one string
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Builds a string from arguments, each followed by a newline.
 *
 * Return: Pointer to the string, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates program arguments into one string
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to the string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i;
	int j;
	int total;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);
	total = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total++;
			j++;
		}
		total++;
		i++;
	}
	result = malloc(sizeof(char) * (total + 1));
	if (result == NULL)
		return (NULL);
	k = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[k] = av[i][j];
			k++;
			j++;
		}
		result[k] = '\n';
		k++;
		i++;
	}
	result[k] = '\0';
	return (result);
}
