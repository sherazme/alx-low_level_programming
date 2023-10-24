#include "lists.h"

/**
* insert_nodeint_at_index - Insert node
* @head: Head
* @idx: Index
* @n: Value
* Return: address or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int index = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	while (current != NULL && index < idx - 1)
	{
		current = current->next;
		index++;
	}

	if (index != idx - 1)
	{
		free(node);
		return (NULL);
	}

	new->next = current->next;
	current->next = node;

	return (node);
}
