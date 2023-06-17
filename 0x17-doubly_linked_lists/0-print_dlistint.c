#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 * @l: a pointer to a doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *l)
{
	size_t number_of_nodes = 0;

	while (l)
	{
		printf("%d\n", l->n);
		l = l->next;
		number_of_nodes++;
	}

	return (number_of_nodes);
}
