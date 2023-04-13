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
	char *fod;
	ssize_t ol;
	ssize_t x;
	ssize_t m;

	ol = open(filename, O_RDONLY);
	if (ol == -1)
		return (0);
	fod = malloc(sizeof(char) *letters);
	m = read(ol, fod, letters);
	x = write(STDOUT_FILENO, fod, m);

	free(fod);
	close(ol);
	return (x);
}
