#include "main.h"

/**
 * create_file - creates a file and writes content to it
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writeCount = 0, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	if (len > 0)
	{
		writeCount = write(fd, text_content, len);
		if (writeCount == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
