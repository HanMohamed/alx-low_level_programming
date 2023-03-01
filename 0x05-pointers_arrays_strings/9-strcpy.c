#include "main.h"

char *_strcpy(char *dest, char *src)
{
	char* ret = dest;
	char* sr = src;
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
	return ret;
}
