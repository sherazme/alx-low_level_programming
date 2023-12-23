#include "hash_tables.h"

/**
 * shash_table_create - Create sorted hash table
 * @size: Size of hash table
 * Return: Pointer to hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *sorted;

	if (size < 1)
	{
		perror("Size must be more than 0\n");
		return (NULL);
	}

	sorted = malloc(sizeof(shash_table_t));
	if (sorted == NULL)
	{
		perror("hash table memory allocating Error\n");
		return (NULL);
	}

	sorted->size = size;
	sorted->array = malloc(sizeof(shash_node_t *) * size);
	if (sorted->array == NULL)
	{
		perror("array memory allocating Error\n");
		free(sorted);
		return (NULL);
	}
	sorted->shead = NULL;
	sorted->stail = NULL;

	for (i = 0; i < size; i++)
		sorted->array[i] = NULL;

	return (sorted);
}

/**
 * shash_table_set - Insert element to hash table
 * @ht: Pointer to hash table
 * @key: Kety of new element
 * @value: Value of new element
 * Return: 1 if it succeeded 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *element;
	int svalue;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	svalue = update_key_sorted(ht, key, value, index);
	if (svalue == 1)
		return (1);
	if (svalue == -1)
		return (0);

	element = create_element_sorted(key, value);
	if (element == NULL)
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = element;
	else
	{
		element->next = ht->array[index];
		ht->array[index] = element;
	}

	svalue = insert_dllist(element, ht);
	if (svalue == -1)
		return (0);

	return (1);
}

/**
 * update_key_sorted - update value if the new element already exist
 * @ht: Pointer to hash table
 * @key: key of new element
 * @value: Value of new element
 * @index: Index of new element in array
 * Return: 1 if element updated, -1 if couldn't be updated, 0 if doesnt exist
 */

int update_key_sorted(shash_table_t *ht, const char *key, const char *value,
	       unsigned long int index)
{
	shash_node_t *element = ht->array[index];
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
 * create_element_sorted - add new element to hash table
 * @key: Key of new element
 * @value: Value of new element
 * Return: Pointer to new element or NULL
 */

shash_node_t *create_element_sorted(const char *key, const char *value)
{
	shash_node_t *element;

	element = malloc(sizeof(shash_node_t));
	if (element == NULL)
		return (NULL);

	element->key = strdup(key);
	if (element->key == NULL)
		return (NULL);

	element->value = strdup(value);
	if (element->value == NULL)
		return (NULL);

	element->next = NULL;
	element->sprev = NULL;
	element->snext = NULL;

	return (element);
}

/**
 * insert_dllist - insert node to doubly linked list sorted by key
 * @element: New element to insert
 * @ht: Pointer to hash table
 * Return: 0 if it success -1 otherwise
 */

int insert_dllist(shash_node_t *element, shash_table_t *ht)
{
	shash_node_t *tmp;

	
	if (ht->shead == NULL || strcmp(element->key, ht->shead->key) < 0)
	{
		element->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = element;
		ht->shead = element;
		if (ht->stail == NULL)
			ht->stail = element;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL &&
		       strcmp(element->key, tmp->snext->key) >= 0)
			tmp = tmp->snext;

		element->sprev = tmp;
		element->snext = tmp->snext;
		if (tmp->snext != NULL)
			tmp->snext->sprev = element;
		tmp->snext = element;

		if (element->snext == NULL)
			ht->stail = element;
	}

	return (0);
}

/**
 * shash_table_get - Get element from sorted hash table
 * @ht: Pointer to sorted hash table
 * @key: key of element to return
 * Return: The value
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *element;

	if (ht == NULL || ht->shead == NULL)
		return (NULL);

	element = ht->shead;
	while (element)
	{
		if (strcmp(element->key, key) == 0)
			return (element->value);
		element = element->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - Print sorted hash table
 * @ht: Pointer to hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *element;
	int f = 0;

	if (ht == NULL || ht->shead == NULL)
		return;

	element = ht->shead;
	printf("{");
	while (element)
	{
		if (f)
			printf(", ");
		printf("'%s': '%s'", element->key, element->value);
		f = 1;
		element = element->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print reverseed sorted hash table
 * @ht: Pointer to hash table
 */
 
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *element;
	int f = 0;

	if (ht == NULL || ht->stail == NULL)
		return;

	element = ht->stail;
	printf("{");
	while (element)
	{
		if (f)
			printf(", ");
		printf("'%s': '%s'", element->key, element->value);
		f = 1;
		element = element->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Delete hash table
 * @ht: Pointer to hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *element;

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
