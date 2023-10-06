#include "hash_tables.h"

/**
 * hash_table_print - It prints key:value from ht
 * @ht: A ointer - hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int v = 0;
	hash_node_t  *bucket;
	int not_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (v = 0; v < ht->size; v++)
	{
		bucket = ht->array[v];
		while (bucket)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
