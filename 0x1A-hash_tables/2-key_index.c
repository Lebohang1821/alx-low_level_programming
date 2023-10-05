#include "hash_tables.h"

/**
 * key_index - It get index for key given
 * @key: key (string) - hash
 * @size: The siz of hash table
 *
 * Return: The index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
