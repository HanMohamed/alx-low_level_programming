#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: the buffer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j, k;
	int temp;

	k = 0;
	if (size <= 0)
		printf("\n");
	else
	{
		while (k < size)
		{
			if (size - k < 10)
				j = size - k;
			else
				j = 10;
			printf("%08x: ", k);
			for (i = 0; i < 10; i++)
			{
				if (i < j)
					printf("%02x", *(b + k + i));
				else
					printf(" ");
				if (i % 2)
					printf(" ");
			}
			for (i = 0; i < j; i++)
			{
				temp = *(b + k + i);
				if (temp < 32 || temp > 132)
					temp = '.';
				printf("%c", temp);
			}
			printf("\n");
			k += 10;
		}
	}
}
