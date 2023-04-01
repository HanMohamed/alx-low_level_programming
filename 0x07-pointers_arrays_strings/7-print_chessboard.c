#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: board
 *
 * a function that prints the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int n;
	int count;

	for (n = 0; n < 8; n++)
	{
		for (count = 0; count < 8; count++)
			_putchar(a[n][count]);

		_putchar('\n');
	}
}
