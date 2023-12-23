#include "hash_tables.h"

/**
 * hash_table_delete - Delete hash table
 * @ht: Pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *element;

	if (ht == NULL)
		return;

	if (ht->size < 1 || ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			element = ht->array[i];
			ht->array[i] = element->next;
			free(element->key);
			free(element->value);
			free(element);
		}
	}
	free(ht->array);
	free(ht);
}
