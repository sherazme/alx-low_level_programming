#include "lists.h"

/**
 * print_listint - Print list
 * @h: Head
 * Return: nodes count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}