#include "main.h"
#include <stdio.h>

/**
 * print_fib - prints
 */
void print_fib(void)
{
	int n = 50;
	int i;
	long a = 0;
	long b = 1;
	long c;

	for (i = 2; i <= n; i++)
	{
		c = a + b;
		printf("%ld", c);
		if (i != n)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_fib();

	return (0);
}
