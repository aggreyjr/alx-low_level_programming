#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - this is the main part of the prog
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if false, or 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	long long a = atoll(argv[1]);
	long long b = atoll(argv[2]);

	printf("%lld\n", a * b);

	return (0);
}

