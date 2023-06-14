#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: string
 *
 * Each element of this array should contain a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 *
 * Return: a pointer to an array of strings (words) or NULL if failed.
 */
char **strtow(char *str)
{
	char **str_word;
	int i, j, n, num_words, start, letters;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = number_words(str);
	if (num_words <= 0)
		return (NULL);

	str_word = malloc(sizeof(char *) * (num_words));
	if (str_word == NULL)
		return (NULL);

	n = 0;
	for (i = 0; i < num_words; i++)
	{
		letters = 0;
		while (str[n] == ' ')
			n++;
		start = n;
		for (; str[n] != ' '; n++)
			letters++;
		letters++;

		str_word[i] = malloc(sizeof(char) * letters);
		if (str_word[i] == NULL)
		{
			for (; i >= 0; i--)
				free(str_word[i]);
			free(str_word);
			return (NULL);
		}

		for (j = 0; j < letters - 1; j++)
			str_word[i][j] = str[start++];
		str_word[i][j] = '\0';
	}
	str_word[num_words + 1] = NULL;
	return (str_word);
}

/**
 * number_words - count the number of words in a string
 * @str: string
 *
 * Return: number of words
 */
int number_words(char *str)
{
	int num_words, str_size;

	str_size = num_words = 0;
	while (str[str_size])
	{
		while (str[str_size] && str[str_size] == ' ')
			str_size++;

		while (str[str_size] && str[str_size] != ' ')
		{
			str_size++;
			if (!str[str_size] || str[str_size] == ' ')
				num_words++;
		}
}
	return (num_words);
}
