#include "main.h"

/**
 * rev_string - reverse string
 * @s: a char  pointer
 *
 * a function that  a function that reverses a string
 *
 */
void rev_string(char *s)
{
	char *startP = s;
	char *endP = s;
	char temp = s[0];

	while (*endP != '\0')
	{
		endP++;
	}

	while (endP > startP)
	{
		endP--;
		temp = *startP;
		*startP = *endP;
		*endP = temp;
		startP++;
	}
}
