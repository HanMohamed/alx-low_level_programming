#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to open
 * @letters: the number of letters it should read and print
 *
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, actual_letters, write_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);

	actual_letters = read(open_file, buffer, letters);
	if (actual_letters == -1)
		return (0);

	write_file = write(STDOUT_FILENO, buffer, actual_letters);
	if (write_file == -1)
		return (0);

	close(open_file);
	free(buffer);
	return (write_file);
}
