#include "main.h"
#include <stdio.h>

/**
 * print_fib - prints
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
		printf("%ld", c);
		if (c % 2 == 0)
			sum += c;
		if (i != n)
		printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	printf("%ld", sum);
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
