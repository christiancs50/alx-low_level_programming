#include "main.h"

#define BUFFER_SIZE 1024
/**
 * print_error_exit - Print error message and exit
 * @code: Exit code
 * @message: Error message
 * @filename: Filename to be included in error message
 */

void print_error_exit(int code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * main - copy  content of one file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return:0 on succes while others on failure
 */
int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytesRead, byteswritten;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error_exit(97, "Usage: cp file_from file_to\n", "");
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | 0664);
	if (file_to == -1)
	{
		close(file_from);
		print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	while ((bytesRead = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		byteswritten = write(file_to, buffer, bytesRead);
		if (byteswritten == -1)
		{
			close(file_from);
			close(file_to);
			print_error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (bytesRead == -1)
	{
		close(file_from);
		close(file_to);
		print_error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
		(file_from > file_to ? file_from : file_to)), exit(100);
	}

	return (0);
}
