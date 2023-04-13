#include "main.h"
i
/*
<<<<<<< HEAD
 * create_file: - Creates a file
=======
 * create_file- Creates a file.
>>>>>>> 79a51314981c210c36bcbe00cd46769b984d5582
 * @filename: a pointer to the name of the file to be created
 * @text_content: a pointer to the string to write to the file
 * Return: it the function fails --1
 * otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int ol, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	ol = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(ol, text_content, len);

	if (ol == -1 || x == -1)
		return (-1);

	close(ol);

	return (1);
}
