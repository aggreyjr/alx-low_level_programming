#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 *
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t v;
	ssize_t k;
	int fd;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	v = read(fd, buff, letters);
	if (v == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	buff[v] = '\0';

	k = write(STDOUT_FILENO, buff, v);
	if (k == -1 || k != v)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (v);
}
