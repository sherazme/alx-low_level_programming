#include "lists.h"

/**
 * get_dnodeint_at_index - Get nth node of list
 * @head: head of list
 * @index: index of node to return
 * Return: nth node of list or NULL if not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != index)
		return (NULL);
	return (tmp);
}
