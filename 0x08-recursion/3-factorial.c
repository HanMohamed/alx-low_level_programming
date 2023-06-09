#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: a given number
 *
 * A function that returns the factorial of a given number
 * If n is lower than 0, the function should return -1 to indicate an error
 * Factorial of 0 is 1
 *
 * Return: the factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (factorial(n - 1) * n);
}
