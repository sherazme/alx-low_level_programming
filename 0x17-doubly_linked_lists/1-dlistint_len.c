#include "lists.h"

/**
 * dlistint_len - count list
 * @h: Head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		number++;
		tmp = tmp->next;
	}

	return (number);
}
