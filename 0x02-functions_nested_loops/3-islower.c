#include "main.h"

/**
 * _islower - checks for lower character
 * @c: for checking
 * return: 0 always
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
