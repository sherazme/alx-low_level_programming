#include "lists.h"

/**
 * add_nodeint - Add node
 * @head: Pointer
 * @n: int
 *
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);


	new->n = n;

	new->next = *head;
	*head = new;

	return (new);
}
