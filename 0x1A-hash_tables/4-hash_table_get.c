#include "hash_tables.h"

/**
 * hash_table_get - It retrieves value associated with a key.
 * @ht: My pointer to hash table.
 * @key: Key to retrieve value for.
 *
 * Return: The value associated with the key, or NULL if the key does not exist.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}
