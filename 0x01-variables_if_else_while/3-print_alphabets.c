#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int lowerChar = 97;

	while (lowerChar <= 122)
	{
		putchar(lowerChar);
		lowerChar++;
	}
	lowerChar = 65;
	while (lowerChar <= 90)
	{
		putchar(lowerChar);
		lowerChar++;
	}
	lowerChar = 10;
	putchar(lowerChar);
	return (0);
}
