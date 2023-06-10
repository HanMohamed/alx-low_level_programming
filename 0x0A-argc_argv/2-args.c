#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer
 *
 * a program that prints all arguments, followed by a new line.
 * All arguments should be printed, including the first one
 *
 * Return: name of file
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
