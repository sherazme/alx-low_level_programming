#include "hash_tables.h"

/**
 * hash_table_create - Create hash tabel
 * @size: Size of hash table
 * Return: Pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size < 1)
	{
		perror("size of hash table must be 0 or more\n");
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		perror("hash table memory allocating Error\n");
		return (NULL);
	}

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		perror("array memory allocating Error\n");
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
