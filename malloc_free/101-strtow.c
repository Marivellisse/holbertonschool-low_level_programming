#include <stdlib.h>
#include "main.h"

/**
 * word_len - calculates the length of a word in a string
 * @str: the string to search
 *
 * Return: length of the word
 */
int word_len(char *str)
{
	int len = 0;

	while (str[len] != '\0' && str[len] != ' ')
		len++;

	return (len);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to search
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] != '\0')
		{
			count++;
			i += word_len(&str[i]);
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to array of words, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, w, letters, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0' && j < word_count)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(&str[i]);

		words[j] = malloc(sizeof(char) * (letters + 1));
		if (words[j] == NULL)
		{
			while (j > 0)
				free(words[--j]);
			free(words);
			return (NULL);
		}

		for (w = 0; w < letters; w++)
			words[j][w] = str[i++];

		words[j][w] = '\0';
		j++;
	}

	words[j] = NULL;
	return (words);
}

