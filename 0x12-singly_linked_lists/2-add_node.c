#include "lists.h"

/**
 * add_node - Add node
 * @head: Pointer
 * @str: String
 *
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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

	new->next = *head;
	*head = new;

	return (new);
}

