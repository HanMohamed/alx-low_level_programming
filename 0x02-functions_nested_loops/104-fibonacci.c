#include "main.h"
#include <stdio.h>

/**
 * print_fib - prints
 */
void print_fib(void)
{
	int n = 98;
	int i;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c;

	for (i = 1; i <= n; i++)
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
