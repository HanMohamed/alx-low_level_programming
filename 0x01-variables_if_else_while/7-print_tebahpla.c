#include <stdio.h>

/**
 * main - Entry point
 * a program that prints the lowercase alphabet in
 * reverse, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int lowerCase;

	for (lowerCase = 122; lowerCase >= 97; lowerCase--)
		putchar(lowerCase);
	lowerCase = 10;
	putchar(lowerCase);
	return (0);
}
