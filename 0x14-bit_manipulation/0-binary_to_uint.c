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
	int i = 0;
	int start = 0;
	int power = 1;
	int count;

	if (b == NULL)
		return (0);

	/* To neglect 0 from left: start at the first 1 from left */
	while (b[i++] == '0')
		start++;

	/* To count how many bits */
	for (count = 0; b[count] != '\0'; count++)
		;
	count--;

	while (count >= start)
	{
		if (b[count] == '0' || b[count] == '1')
		{
			unsigned_number += power * (b[count] - '0');
			power *= 2;
			count--;
		}
		else
		{
			return (0);
		}
	}
	return (unsigned_number);
}
