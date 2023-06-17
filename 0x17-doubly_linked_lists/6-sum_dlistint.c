#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a doubly linked list
 * @head: doubly linked list
 * Return: sum (success)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
