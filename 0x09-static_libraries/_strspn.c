#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, found;

	while (*s)
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
		s++;
	}

	return (count);
}
