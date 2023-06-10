#include "main.h"

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
	char *p = 0;

	p = argv[0];
	while (*p != 0)
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
	return (0);
}
