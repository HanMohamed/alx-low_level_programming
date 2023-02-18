#include <stdio.h>
#include <stdbool.h>

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
	int space = 32;
	int comma = 44;
	int nwLine = 10;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				for (num4 = 48; num4 <= 57; num4++)
				{
					bool print = false;

					if ((num1 < num3 || (num1 == num3 && num2 <= num4))
							&& !(num1 == num3 && num2 == num4))
					{
						putchar(num1);
						putchar(num2);
						putchar(space);
						putchar(num3);
						putchar(num4);
						print = true;
					}
					if (print && !(num1 == 57 && num2 == 56 && num3 == 57 && num4 == 57))
					{
						putchar(comma);
						putchar(space);
					}
				}
			}
		}
	}
	putchar(nwLine);
	return (0);
}

