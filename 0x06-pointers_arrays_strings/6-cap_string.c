#include "main.h"

/**
 * cap_string - capitalizes all words
 * @str: a char pointer
 *
 * a function that capitalizes all words of a string.
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?
 * \", (, ), {, and }
 *
 * Return: A pointer to string.
 */
char *cap_string(char *str)
{
	int i;
	int j;
	int sep[] =  {9, 10, 32, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (str[i] == sep[j])
			{
				i++;
				if (str[i] == sep[j])
					i++;
				if (str[i] <= 122 && str[i] >= 97)
					str[i] -= 32;
			}
		}
	}
	str[i] = '\0';

	return (str);
}
