#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * if b is null return 0
 * if there is one or more chars in the string b that is not 0 or 1 return 0
 *
 * Return:  the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_number = 0;
	int i;
	int base;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		;
	i--;

	base = 1;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
			unsigned_number += (b[i] - '0') * base;
		else
			return (0);
		base *= 2;
		i--;
	}
	return (unsigned_number);
}
