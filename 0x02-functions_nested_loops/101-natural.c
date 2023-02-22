#include "main.h"
#include <stdio.h>

/**
 * sum_multiply - compute and multiply
 *
 * computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded), followed by a new line.
 */
void sum_multiply(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d \n", sum);
}

int main(void)
{
    sum_multiply();
    return (0);
}
