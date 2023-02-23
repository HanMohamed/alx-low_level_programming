#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * prime_factor - find largest prime factor
 *
 * Description: a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 *
 */
void prime_factor(void)
{
	long n = 612852475143;
	long lrgfactr;
	int i;

	while (n % 2 == 0)
		n = n / 2;
	lrgfactr = 2;
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i ==0)
		{
			if (lrgfactr < i)
				lrgfactr = i;
			n /= i;
		}
	}
	if (n > 2 && lrgfactr < n)
		lrgfactr = n;
	printf("%ld\n", lrgfactr);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	prime_factor();
	return (0);
}
