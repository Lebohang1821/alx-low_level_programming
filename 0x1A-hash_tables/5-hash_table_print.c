#include "hash_tables.h"

/**
 * hash_table_print - It prints the k
 * ey-value pairs from a hash table
 * @ht: A pointer to the hash table to be printed
 *
 * This function iterates through the 
 * given hash table and prints its key-value
 * pairs in the format: '<key>: '<value>''. 
 * The pairs are enclosed within curly
 * braces and separated by commas, resulting in a 
 * readable representation of the
 * hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t  *bucket;
	int not_fin = 0;

	if (!ht)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		bucket = ht->array[x];
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
