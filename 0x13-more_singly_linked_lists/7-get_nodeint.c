#include "lists.h"

/**
 * get_nodeint_at_index - Get node
 * @head: Head
 * @index: Index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	current = head;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (current);
}
