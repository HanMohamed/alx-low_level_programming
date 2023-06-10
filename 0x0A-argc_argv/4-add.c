#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * a program that add two numbers.
 * If no number is passed to the program, print 0 followed by a new line
 * If one of the number contains symbols that are not digits, print Error
 * followed by a new line, and return 1
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int sum, n, x;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	p = NULL;
	for (n = 1; n < argc; n++)
	{
		x = strtol(argv[n], &p, 10);
		if (x == 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += x;
	}

	printf("%d\n", sum);
	return (0);
}
