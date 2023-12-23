#include "hash_tables.h"

/**
 * hash_table_print - Print hash table
 * @ht: Pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, f = 0;
	hash_node_t *element;

	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			element = ht->array[i];
			while (element)
			{
				if (f)
					printf(", ");
				printf("'%s': '%s'", element->key, element->value);
				f = 1;
				element = element->next;
			}
		}
		printf("}\n");
	}
}
