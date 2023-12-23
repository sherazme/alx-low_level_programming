#include "hash_tables.h"

/**
 * hash_table_set - Add element to hash table
 * @ht: Pointer to hash table
 * @key: element Key to add
 * @value: element Value
 * Return: 1 if succeeded 0 otherwise
 */
 
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int sv;
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || ht->size < 1 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	sv = update_key(ht, key, value, index);
	if (sv == 1)
		return (1);
	else if (sv == -1)
		return (0);

	item = create_element(key, value);
	if (item == NULL)
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = item;
	else
	{
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);
}

/**
 * update_key - update the value of already exist element
 * @ht: Pointer to hash table
 * @key: key of new element
 * @value: Value of new element
 * @index: Index of new element
 * Return: 1 already exist updated -1 if element couldnt be updated, 0 if doesnt exist
 */
 
int update_key(hash_table_t *ht, const char *key, const char *value,
	       unsigned long int index)
{
	hash_node_t *element = ht->array[index];
	char *new_value;

	while (element)
	{
		if (strcmp(element->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (-1);
			free(element->value);
			element->value = new_value;
			return (1);
		}
		element = element->next;
	}
	return (0);
}

/**
 * create_element - Create new element to add to the hash table.
 * @key: Key of new element
 * @value: Value of new element
 * Return: Pointer to new element or NULL if the element couldnt be created
 */
hash_node_t *create_element(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = strdup(key);
	if (item->key == NULL)
		return (NULL);

	item->value = strdup(value);
	if (item->value == NULL)
		return (NULL);

	item->next = NULL;

	return (item);
}
