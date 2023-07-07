#include "main.h"

/**
 * flip_bits - flip bits
 *
 * @n: a number
 * @m: another number
 *
 * Return: the number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_xor_m, bit;
	int count;

	count = 0;
	n_xor_m = n ^ m;
	while (n_xor_m != 0)
	{
		bit = n_xor_m & 1;
		if (bit == 1)
			count++;
		n_xor_m >>= 1;
	}
	return (count);
}
