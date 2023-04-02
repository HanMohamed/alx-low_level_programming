#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * a program should print the result of the multiplication,
 * followed by a new line.
 * If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int arg1;
	int arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	printf("%d\n", arg1 * arg2);

	return (0);

}
