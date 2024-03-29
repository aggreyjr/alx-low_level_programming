#include "lists.h"

/**
 * listint_len - function that prints all the elements of a listint_t list
 * @h: list whose elements are to be printed
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
