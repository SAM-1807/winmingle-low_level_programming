/**
 * 101-strtow - Splits a string into words
 * Author: Agbai Samuel Chibuike
 * Program: WinMingle Community C Training
 * Description: Splits a string into a NULL-terminated array of words.
 *
 * Return: Pointer to the array, or NULL on failure
 */

#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts words in a string
 * @str: The string
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
		i++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string
 *
 * Return: Pointer to the array of words, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i;
	int j;
	int k;
	int wc;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wc = count_words(str);
	if (wc == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < wc)
	{
		while (str[k] == ' ')
			k++;
		j = k;
		while (str[j] != ' ' && str[j] != '\0')
			j++;
		words[i] = malloc(sizeof(char) * (j - k + 1));
		if (words[i] == NULL)
		{
			while (i > 0)
				free(words[--i]);
			free(words);
			return (NULL);
		}
		j = 0;
		while (str[k] != ' ' && str[k] != '\0')
			words[i][j++] = str[k++];
		words[i][j] = '\0';
		i++;
	}
	words[wc] = NULL;
	return (words);
}
