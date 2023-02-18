#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int numL;
	int numR;
	int space;
	int comma;
	int nwLine;

	space = 32;
	comma = 44;
	nwLine = 10;

	for (numL = 48; numL <= 57; numL++)
	{
		for (numR = numL + 1; numR <= 57; numR++)
		{
			putchar(numL);
			putchar(numR);
			if (numL != 56)
			{
				putchar(comma);
				putchar(space);
			}
		}
	}
	putchar(nwLine);
	return (0);
}
