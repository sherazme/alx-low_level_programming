#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at index
 * @head: Head of list
 * @index: index of node to be deleted
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != index)
		return (-1);

	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;

	if (tmp == *head)
		*head = tmp->next;

	free(tmp);

	return (1);
}
