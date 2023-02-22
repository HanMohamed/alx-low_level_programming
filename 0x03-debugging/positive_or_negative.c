#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - check
 * @i: number to be checked
 *
 * This function  will check then print whether the number
 * stored in the variable i is positive or negative or zero
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
