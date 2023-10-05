#include "hash_tables.h"

/**
 * hash_table_create - Create an empty hash table.
 * @size: The size of the hash table.
 *
 * This function creates an empty hash table with a specified size.
 *
 * Return: If memory allocation is successful, it returns a pointer
 * to the newly created hash table; otherwise, it returns NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	if (size == 0)
	return (NULL);

	hash_table_t *table = calloc(1, sizeof(hash_table_t));
	if (table == NULL)
	return (NULL);

	table->size = size;

	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
