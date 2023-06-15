#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 *
 * A function that concatenates two strings.
 * If n is greater or equal to the length of s2
 * then use the entire string s2.
 * If the function fails, it should return NULL.
 * if NULL is passed, treat it as an empty string.
 *
 * Return: A pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat_string;
	unsigned int s1_size, s2_size, nconcat_size, i, j;

	if (s1 == NULL)
		s1_size = 0;
	else
	{
		for (s1_size = 0; s1[s1_size]; s1_size++)
			;
	}

	if (s2 == NULL)
		s2_size = 0;
	else
	{
		for (s2_size = 0; s2[s2_size]; s2_size++)
			;
	}

	nconcat_size = s1_size + n;
	if (n > s2_size)
		nconcat_size = s1_size + s2_size;

	nconcat_string = malloc(sizeof(char) * (nconcat_size + 1));
	if (nconcat_string == NULL)
		return (NULL);

	for (i = 0; i < s1_size; i++)
		nconcat_string[i] = s1[i];

	j = 0;
	for (; i < nconcat_size; i++, j++)
		nconcat_string[i] = s2[j];
	nconcat_string[i] = '\0';

	return (nconcat_string);
}
