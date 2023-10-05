#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of hash table
 * Return: return the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);
	hash->array = malloc(sizeof(hash_node_t) * size);
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
