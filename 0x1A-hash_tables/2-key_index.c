#include "hash_tables.h"

/**
 * key_index - return the index where the pair key_value should be stored
 * @key: the key
 * @size: the size of the HashTable
 * Return: the desired index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int	ret;

	ret = hash_djb2(key);
	return (ret % size);
}
