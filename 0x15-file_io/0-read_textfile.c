#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters for reading
 * Return: w- actual number of bytes for reading and printing
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t x;
	ssize_t m;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) *letters);
	m = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(fd);
	return (x);
}
