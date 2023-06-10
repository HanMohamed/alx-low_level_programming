#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer
 *
 * a program that add two numbers.
 * f the program does not receive two arguments,
 * program should print Error, followed by a new line, and return 1
 *
 * Return: name of file
 */
int main(int argc, char *argv[])
{
	int sum, n;

	if (argc != 3)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (n = 1; n < argc; n++)
		sum += atoi(argv[n]);

	printf("%d\n", sum);
	return (0);
}
