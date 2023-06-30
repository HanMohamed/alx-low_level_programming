#include "main.h"

int check_isdigit(char *argv[]);

/**
 * A program that multiplies two positive numbers.
 *
 * @argc: number of arguments
 * @argv: arguments
 * Return: The multiplication of two numbers.
 */
int main (int argc, char *argv[])
{
	int i;

	if (argc != 3 || check_isdigit(argv) != 0)
	{
		char *msg = "Error\n";
		for (i = 0; msg[i]; i++)
			_putchar(msg[i]);
		exit(98);
	}
	return (0);
}

/**
 * check_isdigit - checks if argv are numbers;
 * @argv: arguments
 *
 * Return: 0 if digit, if not it returns 1
 */
int check_isdigit(char *argv[])
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		j = 0;
		if (argv[i][j] < 48 || argv[i][j] > 57)
			return (1);
	}
	return (0);
}
