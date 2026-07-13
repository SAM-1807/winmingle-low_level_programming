#include "main.h"

char *leet(char *a)
{
	char *original = a;
	while(*original != '\0')    {
		if(*original == 'a' || *original == 'A')
			*original = 4 + '0';
		if(*original == 'e' || *original == 'E')
			*original = 3 + '0';
		if(*original == 'o' || *original == 'O')
			*original = 0 + '0';
		if(*original == 't' || *original == 'T')
			*original = 7 + '0';
		if(*original == 'l' || *original == 'L')
			*original = 1 + '0';
		original++;
	}
	return(a);

}
