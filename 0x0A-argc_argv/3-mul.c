#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer
 *
 * a program that multiplies two numbers.
 * f the program does not receive two arguments,
 * program should print Error, followed by a new line, and return 1
 *
 * Return: name of file
 */
int main(int argc, char *argv[])
{
	int mul, x, y;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
