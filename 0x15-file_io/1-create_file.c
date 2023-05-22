#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to be written to file
 * Return: success(1) or failure(-1)
 */

int create_file(const char *filename, char *text_content)
{
	int file_open, i, write_in_file;

	if (filename == NULL)
		return (-1);
	file_open = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_open == -1)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		write_in_file = write(file_open, text_content, i);
		if (write_in_file != i)
			return (-1);
	}

	close(file_open);
	return (1);
}
