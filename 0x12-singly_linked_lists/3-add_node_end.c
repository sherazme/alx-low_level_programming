#include "lists.h"

/**
 * add_node_end - Add a node
 * @head: Pointer
 * @str: String
 * Return: address new
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = string;
	new->len = _strlen(string);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return (new);
}