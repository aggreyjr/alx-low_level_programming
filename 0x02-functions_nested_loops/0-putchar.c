#include <unistd.h>

/**
 * _putchar - printout using putchar
 * return: 0(success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
