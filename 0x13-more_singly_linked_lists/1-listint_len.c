#include "lists.h"

/**
 * listint_len - count list
 * @h: Head
 * Return: nodes count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
