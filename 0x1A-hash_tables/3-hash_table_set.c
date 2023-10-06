#include "hash_tables.h"

/**
 * hash_table_set - insert into the hashTable
 * @ht: the hashTable
 * @key: the key to insert
 * @value: the value that come with the key
 * Return: if success 1, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t	*new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	if (index + 1 < ht->size)
		new->next = ht->array[index + 1];
	else
		new->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = new;
		}
		else
		{
			if (ht->array[0])
			{
				free(ht->array[0]->key);
				free(ht->array[0]->value);
				free(ht->array[0]);
			}
			ht->array[0] = new;
		}
	}
	return (1);
}
