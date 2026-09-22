#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int take;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		take = len2;
	else
		take = n;

	result = malloc(len1 + take + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (i = 0; i < take; i++)
		result[len1 + i] = s2[i];
	result[len1 + take] = '\0';

	return (result);
}
