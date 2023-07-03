#include "main.h"
#include <stdio.h>

/**
 * is_pali - a helper function
 *
 * @s: a string to pointer
 * @start: start of string
 * @end: end of string
 *
 * Return: see is_palindrome function
 */
int is_pali(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_pali(s, ++start, --end));
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: a pointer to a string
 *
 * An empty string is a palindrome
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int start, end;

	if (s == NULL)
		return (1);

	start = end = 0;
	while (s[end])
		end++;

	end--;
	return (is_pali(s, start, end));
}
