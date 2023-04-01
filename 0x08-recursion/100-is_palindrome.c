#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 *
 *Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_pali - helper function
 * @s: string
 * @st: start
 * @len: string length
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_pali(char *s, int st, int len)
{
	if (st >= len)
		return (1);

	if (s[st] == s[len])
	{
		st++;
		len--;
		return (is_pali(s, st, len));
	}
	return (0);
}

/**
 * is_palindrome - check if palindrome
 * @s: string
 *
 * An empty string is a palindrome
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	len--;
	return (is_pali(s, 0,  len));
}
