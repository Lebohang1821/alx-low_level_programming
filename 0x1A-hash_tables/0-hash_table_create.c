#include "hash_tables.h"

/**
 * hash_table_create - It creates hash table
 * @size: My size of hash table
 *
 * Return: My pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	h_table = calloc(1, sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = calloc(size, sizeof(hash_node_t *));
	if (h_table->array == NULL)
	{
		free(h_table);
		return (NULL);
	}
	return (h_table);
}
