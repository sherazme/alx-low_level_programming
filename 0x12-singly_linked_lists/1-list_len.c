#include "lists.h"

/**
 * list_len -  Calculat lenght
 * @h: Pointer
 * Return: number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

