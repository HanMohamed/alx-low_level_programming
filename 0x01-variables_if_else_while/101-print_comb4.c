#include <stdio.h>

/**
 * main -entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int space;
	int comma;
	int nwLine;

	space = 32;
	comma = 44;
	nwLine = 10;
	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			for (num3 = num2 + 1; num3 <= 57; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);
				if (num1 != 55)
				{
					putchar(comma);
					putchar(space);
				}
			}
		}
	}
	putchar(nwLine);
	return (0);
}
