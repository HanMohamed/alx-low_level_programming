#include "main.h"

/**
 * _isupper - checks
 * @c: integer character
 *
 * Description: a function that checks for uppercase character.
 *
 * Return: 1 if c is uppercase otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
