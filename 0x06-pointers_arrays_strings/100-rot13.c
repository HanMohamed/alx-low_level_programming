#include "main.h"

/**
 * rot13 - encode string into rot13
 * @str: a char pointer
 *
 * a function that encodes a string into rot13.
 * use only one if, two loops
 *
 * Return: A pointer to string.
 */
char *rot13(char *str)
{
	int i;
	int j;
	char *before = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *after = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; before[j] != '\0'; j++)
		{
			if (str[i] == before[j])
			{
				str[i] = after[j];
				break;
			}
		}
	}
	return (str);
}
