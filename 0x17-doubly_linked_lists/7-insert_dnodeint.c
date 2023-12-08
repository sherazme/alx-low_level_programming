#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert new node at a given position
 * @h: Head of list
 * @idx: index of list where new node should be added
 * @n: Value of new node
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (i != idx - 1)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;

	return (new);
}
