char *string_toupper(char *a)
{
	char *original = a;

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
			*a = *a - 32;
		a++;
	}

	return (original);
}
