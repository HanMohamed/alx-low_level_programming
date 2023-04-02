#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: arguments
 *
 *  a program that prints the number of arguments passed into it.
 *
 *  Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (*argv != 0)
		printf("%d\n", argc - 1);

	return (0);
}
