#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer should point to a newly allocated space
 * in memory which contains the ontents of s1,
 * followed by the contents of s2, and null terminated
 * or return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int size1 = 0;
	int size2 = 0;
	int i;
	int j;

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	concat = malloc((size1 + size2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		concat[i] = s1[i];
	for (j = 0; i < size2 + size2; i++, j++)
		concat[i] = s2[j];
	concat[i] = '\0';
	return (concat);
}
