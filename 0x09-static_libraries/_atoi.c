

int _atoi(char *s)
{
	int result = 0;
	for (int i = 0; s[i] != '\0'; ++i)
		result = result * 10 + s[i] - '0';
	return result;
}
