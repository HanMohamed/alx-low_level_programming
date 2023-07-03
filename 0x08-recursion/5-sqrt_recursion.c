#include "main.h"


/**
 * _sqrt - helper function to get square root of a number
 * @i: square root of number
 * @n: to get its square root
 *
 * Return: see _sqrt_recursion function
 */
int _sqrt(int i, int n)
{
	int sq;

	sq = i * i;
	if (sq == n)
		return (i);
	if (sq < n)
	{
		i++;
		return (_sqrt(i, n));
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * a function that returns the natural square root of a number.
 * if n does not have a natural square root, the function should return -1
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (_sqrt(i, n));
}
