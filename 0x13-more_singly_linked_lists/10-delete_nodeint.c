#include "lists.h"

/**
* delete_nodeint_at_index - delete node
* @head: Head
* @index: Index
* Return: address or NULL
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);
{
	listint_t *nxt, *current;
	int result = -1;
	unsigned int i = 0;

	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		result = 1;
	}

	current = *head;
	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (i != index - 1)
		return (-1);

	nxt = current->next;
	free(current);
	current->next = nxt;

	return (result);
}
