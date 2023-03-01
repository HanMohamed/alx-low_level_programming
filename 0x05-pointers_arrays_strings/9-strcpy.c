#include "main.h"

/**
 * _strcpy -  copies the string pointer
 * @des: the copied
 * @scr: to copy from
 *
 * a function that copies the string pointed to by src
 * including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *
 *  Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ret = dest;
	char *sr = src;
	int i;
	int len = 0;

	while (*sr != '\0')
	{
		len++;
		sr++;
	}

	for (i = 0; i <= len ; i++)
	{
		*dest = src[i];
		dest++;
	}
	*dest = '\0';
	return (ret);
}
