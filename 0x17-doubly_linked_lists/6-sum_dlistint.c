#include "lists.h"

/**
 * sum_dlistint - count sum of list elements
 * @h: Head of list
 * Return: The sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;
	const dlistint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
