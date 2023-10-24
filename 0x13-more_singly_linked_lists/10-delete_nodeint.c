#include "lists.h"

/**
* delete_nodeint_at_index - delete node
* @head: Head
* @index: Index
* Return: address or NULL
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nxt, *current, *prev;
	int result = -1;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	prev = NULL;
	current = *head;
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i != index)
		return (-1);

	nxt = current->next;
	prev->next = nxt;
	free(current);
	/*current->next = nxt;*/

	return (result);
}
