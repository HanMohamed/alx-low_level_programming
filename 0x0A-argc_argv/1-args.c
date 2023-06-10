#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer
 *
 * a program that prints  the number of arguments passed into it.
 *
 * Return: number of arguments
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
