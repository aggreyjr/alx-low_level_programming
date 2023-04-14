#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int f;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (f = 0; b[f]; i++)
	{
		if (b[f] < '0' || b[f] > '1')
			return (0);
		result = 2 * result + (b[f] - '0');
	}

	return (result);
}

