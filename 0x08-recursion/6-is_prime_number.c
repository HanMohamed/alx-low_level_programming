#include "main.h"

/**
 * _sqrt - a helper function to check if prime
 * @x: the number
 * @y: itteration
 *
 * Return: square root
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (0);

	if (y * y > x)
		return (1);

	return (_sqrt(x, y + 1));
}

/**
 * is_prime_number - if prime number
 * @n: a number
 *
 *  a function that returns 1 if the input integer is a prime number
 *  otherwise return 0.
 *
 * Return: 1 if prime or 0.
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	return (_sqrt(n, 1));
}
