#include "main.h"

/**
 * print_last_digit - prints
 * @n: integer parameter
 *
 * Descrirtion: A function that prints
 * the last digit of a number.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar('0' + lastDigit);
	return (lastDigit);
}

