#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 *
 * not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of 2 while loops, 2 if.
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, separator;

	va_start(ap, format);
	i = separator = 0;

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(ap, int));
				separator = 1;
				break;
			}
			case 'i':
			{
				printf("%d", va_arg(ap, int));
				separator = 1;
				break;
			}
			case 'f':
			{
				printf("%f", va_arg(ap, double));
				separator = 1;
				break;
			}
			case 's':
			{
				if (va_arg(ap, char*) == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(ap, char*));
				separator = 1;
				break;
			}
			default:
				separator = 0;
		}
		if (format[i + 1] != '\0' && separator == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
