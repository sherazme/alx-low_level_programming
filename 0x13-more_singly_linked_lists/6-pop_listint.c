#include "lists.h"

/**
 * pop_listint - Deletes head
 * @head: head
 * Return: head
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (value);
}
