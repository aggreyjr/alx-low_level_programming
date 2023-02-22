#include "main.h"

/**
 * _islower - checks for lower character
 * @c: for checking
 * return: 1 for lower case and 0 for else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
