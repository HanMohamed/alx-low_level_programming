#include "main.h"
#include <stdio.h>

/**
 * print_fib - prints
 */
void print_fib(void)
{
	int n = 90;
	int m = 1000000000;
	int i;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c;
	unsigned long int a1;
	unsigned long int a2;
	unsigned long int b1;
	unsigned long int b2;
	unsigned long int aa;
	unsigned long int bb;

	for (i = 1; i <= n; i++)
	{
		c = a + b;
		printf("%lu", c);
		printf(", ");
		a = b;
		b = c;
	}
	a1 = a / m;
	a2 = a % m;
	b1 = b / m;
	b2 = b % m;
	for ( ; i <= 98; i++)
	{
		aa = a1 + b1;
		bb = a2 + b2;
		if (a2 + b2 > 9999999999)
		{
			aa += 1;
			bb %= m;
		}
		printf("%lu%lu", aa, bb);
		if (i != 98)
			printf(", ");
		a1 = b1;
		a2 = b2;
		b1 = aa;
		b2 = bb;
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
