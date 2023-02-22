#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the number to be computed
 * Return: absolute number or 0
 */

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
        }
}
