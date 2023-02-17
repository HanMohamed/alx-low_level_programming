#include <stdio.h>

/**
 * main - Entry point
 *
 * A program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int space = 32;
	int comma = 44;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(space);
			putchar(comma);
		}
	}
	num = 10;
	putchar(num);
	return (0);
}

