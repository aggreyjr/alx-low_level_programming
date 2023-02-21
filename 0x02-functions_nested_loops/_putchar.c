#include <unistd.h>

/**
 * _putchar - writes c to standard output
 * @c - the printout
 * return: 1 success
 * on error: -1 returns
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
