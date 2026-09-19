#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];
	result[len1 + len2] = '\0';

	return (result);
}
