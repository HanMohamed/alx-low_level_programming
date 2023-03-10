#include "main.h"
#include <stdbool.h>

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
	char sep[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] <= 122 && str[i + 1] >= 97)
					str[i + 1] -= 32;
			}
		}
	}

	return (str);

}
