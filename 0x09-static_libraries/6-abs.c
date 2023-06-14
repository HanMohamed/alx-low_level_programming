#include "main.h"

/**
 * _abs - compute abs value
 * @n: integer to compute its value.
 *
 * Description: a function that computes the absolute
 * value of an integer.
 *
 * Return: abs value
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}
