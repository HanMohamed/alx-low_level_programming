#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: string to append at the end of the file
 * Return: success(1) or failure(-1)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, append_file, i;

	if (filename == NULL)
		return (-1);
	open_file = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (open_file < 0)
		return (-1);

	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		append_file = write(open_file, text_content, i);
		if (append_file < 0)
		{
			close(open_file);
			return (-1);
		}
	}

	close(open_file);
	return (1);
}
