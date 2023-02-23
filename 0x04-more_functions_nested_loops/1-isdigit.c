#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: integer character
 *
 * Description: a function that checks for a digit
 *
 * Return: 1 if c is digit otherwise 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
