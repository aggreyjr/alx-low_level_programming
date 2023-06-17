#include "lists.h"

/**
 *  dlistint_len - prints all the elements of a doubly linked lists
 * @l: pointer to doubly linked lists
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *l)
{
	size_t number_of_elements = 0;

	while (l)
	{
		l = l->next;
		number_of_elements++;
	}

	return (number_of_elements);
}
