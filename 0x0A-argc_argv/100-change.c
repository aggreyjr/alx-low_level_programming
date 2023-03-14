#include <stdio.h>
#include <stdlib.h>

/**
 * main - function main
 * @argc: length of argv
 * @argv: number of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	/*declare variables*/
	int position, total, change, aux;
	int coins[] = {25, 10, 5, 2, 1};/*array int*/

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);/*convert str to int*/

	if (total <= 0)
	{
		print("0\n");
		return (0);
	}
	/*while*/
	while (coins[position] != '\0')
	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}
		position++;
	}
	printf("%d\n", change);
	return (0);
}
