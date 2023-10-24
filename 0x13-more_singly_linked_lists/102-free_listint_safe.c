#include "lists.h"

/**
 * free_listint_safe - Free
 * @h: pointer
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0, i, j;
	listint_t *visited[1024];
	listint_t *current = *h;

	while (current != NULL && num < 1024)
	{
		for (i = 0; i < num; i++)
		{
			if (current == visited[i])
			{
				for (j = i; j < num; j++)
					visited[j]->next = NULL;

				*h = NULL;
				return (num);
			}
		}

		visited[num++] = current;
		current = current->next;
		free(visited[num - 1]);
	}

	*h = NULL;

	return (num);
}
