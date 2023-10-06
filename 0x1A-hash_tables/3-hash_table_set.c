#include "hash_tables.h"

/**
 * hash_table_set - It adds an element to hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add to the element.
 * @value: The value to add to the element.
 *
 * Return: 1 if the operation succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	hash_node_t  *bucket, *my_new_node;

	if (!ht || !key || !*key || !value)
		return (0);

	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = valuecopy;
			return (1);
		}
		bucket = bucket->next;
	}
	my_new_node = calloc(1, sizeof(hash_node_t));
	if (my_new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (!keycopy)
		return (0);
	my_new_node->key = keycopy;
	my_new_node->value = valuecopy;
	my_new_node->next = ht->array[index];
	ht->array[index] = my_new_node;
	return (1);
}
