#include "lists.h"

/**
 * print_dlistint- Prints list
 * @h: Head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;
	const dlistint_t *tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		number++;
		tmp = tmp->next;
	}

	return (number);
}
