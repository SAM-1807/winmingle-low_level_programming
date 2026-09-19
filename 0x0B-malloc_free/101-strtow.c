#include "main.h"

/**
 * free_words - frees a partially or fully built array of words.
 * @words: the array of word pointers.
 * @count: how many entries have been allocated so far.
 */
static void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);
	free(words);
}

/**
 * strtow - splits a string into words.
 * @str: the input string.
 *
 * Return: a NULL-terminated array of heap-allocated words, or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count = 0;
	int i = 0;
	int j;
	int start;
	int len;
	int w;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* First pass: count words. */
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
			word_count++;
		while (str[i] != '\0' && str[i] != ' ')
			i++;
	}

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Second pass: allocate and copy each word. */
	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;

		start = i;
		while (str[i] != '\0' && str[i] != ' ')
			i++;
		len = i - start;

		words[w] = malloc(len + 1);
		if (words[w] == NULL)
		{
			free_words(words, w);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[w][j] = str[start + j];
		words[w][len] = '\0';
		w++;
	}

	words[w] = NULL;
	return (words);
}
