#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of hash table
 * Return: return the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int	i;

	hash = malloc(sizeof(hash_table_t));
	if (!hash || size <= 0)
		return (NULL);
	hash->size = size;
	hash->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	i = 0;
	while (i < size)
		hash->array[i++] = NULL;
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
