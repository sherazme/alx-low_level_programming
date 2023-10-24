#include "lists.h"

/**
 * free_listint - Free list.
 *
 * @head: Head
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}

