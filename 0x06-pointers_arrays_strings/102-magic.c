#include <stdio.h>

/**
 * main - you are not allowed to code anything else than this line of code
 * Remember:
 * you are not allowed to use a
 * you are not allowed to modify p
 * only one statement
 * Return: (0) success
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;

	pintf("a[2] = %d\n", a[2]);
	return (0);
}
