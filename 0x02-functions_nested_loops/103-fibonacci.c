#include "main.h"
#include <stdio.h>

/**
 * print_even_fib - prints
 */
void print_even_fib(void)
{
	int n = 50;
	int i;
	long a = 0;
	long b = 1;
	long c;
	long sum = 0;

	for (i = 1; i <= n; i++)
	{
		c = a + b;
		if (c % 2 == 0 && c < 4000000)
			sum += c;
		a = b;
		b = c;
	}
	printf("%ld\n", sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_even_fib();

	return (0);
}
