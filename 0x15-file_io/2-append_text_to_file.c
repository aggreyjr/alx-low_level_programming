#include "main.h"

/**
 * append_text_to_file - function to create a file
 * @filename: name of file to be manipulated
 * @text_content: text to be added into file
 * Return: 1 (success) or -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t f;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		len++;

		f = write(fd, text_content, len);
		if (f == -1 || f != len)
		{
			close(fd);
			return (-1);
		}
	}
	else
	{
		close(fd);
		return (1);
	}

	close(fd);
	return (1);
}
