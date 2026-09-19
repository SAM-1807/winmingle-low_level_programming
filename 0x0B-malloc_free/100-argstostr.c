#include "main.h"

char *argstostr(int ac, char **av)
{
	char *result;
	int total;
	int i;
	int j;
	int pos;

	if (ac == 0 || av == NULL)
		return (NULL);

	total = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total++;
			j++;
		}
		total++;
	}

	result = malloc(total + 1);
	if (result == NULL)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			result[pos] = av[i][j];
			pos++;
			j++;
		}
		result[pos] = '\n';
		pos++;
	}
	result[pos] = '\0';

	return (result);
}
