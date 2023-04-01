#include "main.h"

/**
 * _sqrt - a helper function to check square root
 * @x: the number
 * @y: itteration
 *
 * return: square root
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);

	if (y * y > x)
		return (-1);

	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the value of square root of a number
 * @n: a number
 *
 * If n does not have a natural square root, the function should return -1
 *
 * Return: the value of the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
