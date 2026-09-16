#include "main.h"

char *rot13(char *a)
{
	char *original = a;

	while(*original != '\0')    {
		if(*original >= 'a' && *original <= 'z')    {
			if(*original >= 'a' && *original <= 'm')    	
				*original = *original + 13;
			else    
				*original = *original - 13;
		}
		if(*original >= 'A' && *original <= 'Z')    {
			if(*original >= 'A' && *original <= 'M')
				*original = *original + 13;
			else   
				*original = *original - 13;
		}
		original++;
	}
	return(a);
}

