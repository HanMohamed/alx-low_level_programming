#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: A program that prints the alphabet in lowercase,
 * except e and q followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowerCase = 97;

	while (lowerCase <= 122)
	{
		if (lowerCase != 101 && lowerCase != 113)
			putchar(lowerCase);
		lowerCase++;
	}
	lowerCase = 10;
	putchar(lowerCase);
	return (0);
}
