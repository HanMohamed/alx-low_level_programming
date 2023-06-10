#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer
 *
 * a program that prints its name, followed by a new line.
 *
 * Return: name of file
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
