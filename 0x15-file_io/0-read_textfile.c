#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: pointer to text
 * @letters: size of letters
 * Return: actual number of letters it should read and print 0r 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytesRead, byteswritten;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytesRead = read(file, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	byteswritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (byteswritten == -1 || byteswritten != bytesRead)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (byteswritten);
}
