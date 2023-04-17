#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024bytes for buffer.
 * @file: the name of the file buffer is stroring chars for.
 * Return: a pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - closes file descriptors
 * @fd: file descriptor to be closed.
 */

void close_file(int fd)
{
	int k;

	k = close(fd);

	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot close ol %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents from a file to another
 * Description: if the argument count is incorrect - exit code 97
 * if file_from does not exist or cannot be read - exit code 98
 * if file_to cannot be created or written to  - exit code 99
 * if the file_to or file_from cannot be closed - exit code 100.
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int from, to, t, x;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	t = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || t == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		x = write(to, buffer, t);
		if (to == -1 || x == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		t = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (t > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);

}
