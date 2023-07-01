#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	/* declare pointer to argument list */
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	sum = 0;

	/* Initializing argument to the list pointer */
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	/* Ending argument list traversal */
	va_end(ap);

	return (sum);
}
