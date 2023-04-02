#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 *
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1.
 * use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int count, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	count = 0;
	while (change > 0)
	{
		if (change % 5 == 0)
		{
			if (change >= 25)
			{
				count += change / 25;
				change = change % 25;
			}
			else if (change < 25 && change > 10)
			{
				count += 2;
				change = 0;
			}
			else
			{
				count += 1;
				change = 0;
			}
		}
		else
		{
			if (change % 5 == 1 || change % 5 == 2)
				count += 1;
			else
				count += 2;
			change -= change % 5;
		}
	}
	printf("%d\n", count);
	return (0);
}
