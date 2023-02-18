#include <stdio.h>

/**
 * main - Entry Point
 * A program that prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99.
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of
 * the numbers 0 and 1
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int space;
	int comma;
	int nwLine;

	nwLine = 10;
	space = 32;
	comma = 44;
	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = num2; num3 <= 57; num3++)
			{
				for (num4 = num3 + 1; num4 <= 57; num4++)
				{
					putchar(num1);
					putchar(num2);
					putchar(space);
					putchar(num3);
					putchar(num4);
					/*if (num1 != 57 && num4 != 57)
					*/
						putchar(comma);
						putchar(space);
					
				}
			}
		}
	}
	putchar(nwLine);
	return (0);
}

