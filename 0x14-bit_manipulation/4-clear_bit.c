#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: a pointer to number
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1;
	unsigned long int result;

	if (index > 63)
		return (-1);

	mask = mask << index;
	result = *n ^ mask;

	if (result <= *n)
		*n = result;

	return (1);
}
