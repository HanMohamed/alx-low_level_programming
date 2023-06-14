#include <printf.h>
#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Return: a pointer to an array of strings (words) or NULL if failed
 */
char **strtow(char *str)
{
	char **str_word;
	int i, j, n, str_size, num_words, start, words;

	if (str == NULL)
		return (NULL);

	num_words = 0;
	for (str_size = 0; str[str_size]; str_size++)
	{
		if (str[str_size] == ' ')
		{
			while (str[str_size] == ' ')
				str_size++;
			num_words++;
		}
	}
	num_words--;
	if (str_size == 0 && num_words == 0)
		return (NULL);

	str_word = malloc(sizeof(char *) * num_words);
	if (str_word == NULL)
		return (NULL);

	n = 0;
	for (i = 0; i < num_words; i++)
	{
		words = 0;
		while (str[n++] == ' ')
			;

		start = n - 1;
		for (++n; str[n] != ' '; n++)
			words++;
		words++;
		words++;
		str_word[i] = malloc(sizeof(char) * words);
		if (str_word[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(str_word[i]);
			free(str_word);
			return (NULL);
		}

		for (j = 0; j < words; j++)
		{
			str_word[i][j] = str[start++];
		}
		str_word[i][j] = '\0';

	}
	return (str_word);
}
