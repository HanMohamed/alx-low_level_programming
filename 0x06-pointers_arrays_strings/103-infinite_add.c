#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1: a pointer to  positive number
 * @n2: a pointer to positive number
 * @r: the buffer that the function will use to store the result
 * @size_r:  the buffer size
 *
 * if the result can not be stored in r the function must return 0
 *
 * Return: a pointer to the sum.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	char *p = n1;
	int i, smalln, largen, diff, sum;
	int len1 = 0;
	int len2 = 0;
	int carry = 0;
	char *d = n2;
	char *start = r;
	char *end = r;
	char temp;
	char *large;
	char *small;

	while (*p != '\0')
	{
		p++;
		len1++;
	}
	while (*d != '\0')
	{
		d++;
		len2++;
	}
	if (len1 >= len2)
	{
		large = n1;
		small = n2;
		diff = len1 - len2;
		smalln = len2;
		largen = len1;
	}
	else
	{
		large = n2;
		small = n1;
		diff = len2 - len1;
		smalln = len1;
		largen = len2;
	}
	for (i = smalln - 1; i >= 0; i--)
	{
		sum = ((small[i] - '0') + (large[i + diff] - '0') + carry);
		*end = (sum % 10 + '0');
		carry = sum / 10;
		end++;
	}
	for (i = largen - smalln - 1; i >= 0; i--)
	{
		sum = (large[i] - '0' + carry);
		*end = (sum % 10 + '0');
		carry = sum / 10;
		end++;
	}
	if (carry)
	{
		*end = (carry + '0');
		largen++;
		end++;
	}
	while (end > start)
	{
		end--;
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
	}
	r[largen] = '\0';
	if (largen >= size_r)
		r = 0;
	return (r);
}
