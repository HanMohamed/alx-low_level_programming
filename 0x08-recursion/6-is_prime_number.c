#include "main.h"

/**
 * is_prime - A helper function
 * @i: for iteration
 * @n: number
 *
 * Return: see is_prime_number function
 */
int is_prime(int i, int n)
{
	if (i >= n/2)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(++i, n));
}

/**
 * is_prime_number - is a prime number
 * @n: the input integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	i = 2;
	return (is_prime(i, n));
}
