#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the prog
 * @argc: counting arguments
 * @argv: arguments
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*declare variables*/
	int count = 0;

	if (argc > 0)
	{
		/*while - prints each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
