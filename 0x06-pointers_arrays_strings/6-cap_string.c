#include "main.h"

char *cap_string(char *str)
{
	char *original = str;
	int capitalize = 1;

	while (*str != '\0')
	{
		/* Check if current character is a separator */
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
				*str == ',' || *str == ';' || *str == '.' ||
				*str == '!' || *str == '?' || *str == '"' ||
				*str == '(' || *str == ')' || *str == '{' || *str == '}')
		{
			capitalize = 1;
		}
		else if (capitalize && *str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}

		str++;
	}

	return (original);
}
