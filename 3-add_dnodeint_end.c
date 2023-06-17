#include "lists.h"

/**
 *  add_dnodeint_end - function that adds a new node at the end of a doubly linked list
 * @head: double pointer to doubly linked list
 * @i: integer to be inserted into a new_node
 * Return: pointer to new_node (success) or NULL (fail)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int i)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->i = i;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
