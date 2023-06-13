#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * The returned pointer should point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 *
 * Return: A pointer to concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int s1_size;
	int s2_size;
	int i, j;

	for (s1_size = 0; s1[s1_size]; s1_size++)
		;
	for (s2_size = 0; s2[s2_size]; s2_size++)
		;

	str_concat = malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (str_concat == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		str_concat[i] = s1[i];

	for (j = 0; j < s2_size; j++, i++)
		str_concat[i] = s2[j];

	str_concat[i] = '\0';

	return (str_concat);
}
