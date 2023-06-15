#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer
 *
 * prints the minimum number of coins to make change for an amount of money.
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * Return: 0 - Success
 */
int main(int argc, char *argv[])
{
	int change, money;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	change = 0;
	if (money <= 0)
	{
		printf("Error\n");
		return (1);
	}
	if (money >= 25)
	{
		change = money / 25;
		money = money % 25;
		if (money == 0)
		{
			printf("%d\n", change);
			return (0);
		}
	}
	if (money >= 10)
	{
		change += money / 10;
		money = money % 10;
		if (money == 0)
		{
			printf("%d\n", change);
			return (0);
		}
	}
	if (money % 5 == 0 || money % 5 == 1 || money % 5 == 2)
		change++;
	else
		change = change + 2;
	printf("%d\n", change);
	return (0);
}
