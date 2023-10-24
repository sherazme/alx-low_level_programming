#include "lists.h"

/**
 * sum_listint - sum list
 * @h: Head
 * Return: nodes count
 */
int sum_listint(listint_t *head)
{
	
	int sum = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
