#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: the hashTable
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int	i;
	unsigned long int	cpt;

	cpt = 0;
	if (!ht)
		return;
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
			cpt++;
		i++;
	}
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
			i++;
		else
		{
			printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
			if (i < cpt - 1)
				printf(", ");
			i++;
		}
	}
	printf("}");
}
