#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size required from s2
 *
 * Return: pointer to new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nconcat;
	unsigned int i;
	unsigned int ns1 = 0;
	unsigned int ns2 = 0;

	if (s1 == NULL)
		ns1 = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			ns1++;
	}

	if (s2 == NULL)
		ns2 = 0;
	else
	{
		for (i = 0; s2[i]; i++)
			ns2++;
	}
	if (n < ns2)
		ns2 = n;

	nconcat = malloc(sizeof(char) * (ns1 + ns2 + 1));
	if (nconcat == NULL)
		return (NULL);

	for (i = 0; i < ns1; i++)
		nconcat[i] = s1[i];

	for (i = 0; i < ns2; i++)
		nconcat[i + ns1] = s2[i];

	nconcat[ns1 + ns2] = '\0';

	return (nconcat);
}
