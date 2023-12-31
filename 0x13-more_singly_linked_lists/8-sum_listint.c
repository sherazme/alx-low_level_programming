#include "lists.h"

/**
 * sum_listint - sum list
 * @head: Head
 * Return: nodes count
 */
int sum_listint(listint_t *head)
{

	int sum = 0;
	const listint_t *current;

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

