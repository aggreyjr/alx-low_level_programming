#include "lists.h"

/**
 * add_dnodeint - funct to add a new node at the beginning of a doubly linked list
 * @head: double pointer to a doubly linked list
 * @i: integer to be inserted into the new_node
 * Return: pointer to new_node (success) or NULL (fail)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int i)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->i = i;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
