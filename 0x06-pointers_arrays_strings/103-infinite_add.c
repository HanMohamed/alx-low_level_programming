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
int get_len(char *p)
{
	int len = 0;
	char *d = p;

	while (*d != '\0')
	{
		d++;
		len++;
	}
	return (len);
}
void swap_n2_n1(char *n1, char *n2)
{
	char *temp = n1;

	n1 = n2;
	n2 = temp;
}
void reverse(char *n1)
{
	char *start = n1;
	char *end = n1;
	char temp;

	while (*end != '\0')
		end++;
	while (end > start)
	{
		end--;
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
	}
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1, len2, diff, sum, swapint;
	int carry = 0;
	char *p = r;
i = 0;
    while (i < size_r) {
        *p = '0';
        p++;
        i++;
    }
        p= r;
	len1 = get_len(n1);/* larg */
	len2 = get_len(n2);/*small */
	if (len1 < len2)
	{
		swap_n2_n1(n1, n2);
		swapint = len1;
		len1 = len2;
		len2 = swapint;
	}
	diff = len1 - len2;
	for (i = len2 - 1; i >= 0; i--)
	{
		sum = ((n2[i] - '0') + (n1[i + diff] - '0') + carry);
		*p = (sum % 10 + '0');
		carry = sum / 10;
		p++;
	}
	for (i = diff - 1; i >= 0; i--)
	{
		sum = (n1[i] - '0' + carry);
		*p = (sum % 10 + '0');
		carry = sum / 10;
		p++;
	}
	if (carry)
	{
		*p = (carry + '0');
		len1++;
		p++;
	}
	r[len1] = '\0';
	reverse(r);
	if (len1 >= size_r)
		r = 0;
	return (r);
}
