#include <stdio.h>
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
int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error");
		return (1);
	}

	printf("%d\n", ((*argv[1]) * (*argv[2])));
	return (0);
}
