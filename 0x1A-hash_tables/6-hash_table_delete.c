#include "hash_tables.h"

/**
 * hash_table_delete - It frees hash table and nodes
 * @ht: My pointer - hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *aux_free;
	unsigned long int o = 0;

	if (!ht)
		return;

	for (o = 0; o < ht->size; o++)
	{
		bucket = ht->array[o];
		while (bucket)
		{
			aux_free = bucket;
			bucket = bucket->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}
