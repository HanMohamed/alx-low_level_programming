#include "main.h"

/**
 * leet - encode string into 1337
 * @str: a char pointer
 *
 * a function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * use only one if, two loops
 *
 * Return: A pointer to string.
 */
char *leet(char *str)
{
	int i;
	int j;
	char *small = "oleat";
	char *capital = "OLEAT";
	char encode[] = {48, 49, 51, 52, 55};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == small[j] || str[i] == capital[j])
				str[i] = encode[j];
		}
	}
	return (str);
}
