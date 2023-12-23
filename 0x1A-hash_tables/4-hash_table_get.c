#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value associated with a key
 * @ht: Pointer to hash table
 * @key: key to look for
 * Return: The value associated with key or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	element = ht->array[index];
	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
		element = element->next;
	}
	return (NULL);
}
