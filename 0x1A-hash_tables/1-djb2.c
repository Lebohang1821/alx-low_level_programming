#include "hash_tables.h"

/**
 * hash_djb2 - It implement djb2 algorithm
 * @str: string used - generate hash value
 *
 * Return: It return my_hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int my_hash;
	int v;

	my_hash = 5381;
	while ((v = *str++))
	{
		my_hash = ((my_hash << 5) + my_hash) + v; /* my_hash * 33 + v */
	}
	return (my_hash);
}
