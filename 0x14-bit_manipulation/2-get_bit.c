#include "main.h"

/**
 * get_bit -  a function that returns the value of a bit at a given index.
 *
 * @n: a number
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1;
	int result;

	mask = mask << index;
	result = n & mask;
	result = result >> index;

	return (result);
}
