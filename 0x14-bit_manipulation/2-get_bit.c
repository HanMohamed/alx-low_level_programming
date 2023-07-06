#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1;
	int result;

	mask = mask << index;
	result = n & mask;

	return (result);
}
