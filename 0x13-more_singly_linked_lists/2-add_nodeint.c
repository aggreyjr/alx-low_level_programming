#include "lists.h"

/**
 * add_nodeint - function that adds a new
 * node at the beginning of a listint_t list
 * @head: double pointer to first node
 * @n: integer in the node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
