#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: a pointer for the file name
 * @text_content: the string to add to the end of the file
 * Return: if the function fails or NULL filename --1
 * if the file does not exist, user has no write permission --1
 * otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O-WRONLY | O_APPEND);
	x = write(o, text_content, len);

	if (o == -1 || x == -1)
		return (-1);

	close(o);

	return (1);
}
