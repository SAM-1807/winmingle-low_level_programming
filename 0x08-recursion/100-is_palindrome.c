#include "main.h"

int strlen_helper(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_helper(s + 1));
}

int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (palindrome_helper(s, start + 1, end - 1));
}

int is_palindrome(char *s)
{
	int len = strlen_helper(s);
	return (palindrome_helper(s, 0, len - 1));
}
