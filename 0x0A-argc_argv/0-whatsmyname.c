#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: arguments
 *
 * a program that prints its name, followed by a new line
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
