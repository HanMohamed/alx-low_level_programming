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
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
