#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file pointer
 * @text_content: Content of file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t byteswritten, text_len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}


	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;


		byteswritten = write(file, text_content, text_len);

		if (byteswritten == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
