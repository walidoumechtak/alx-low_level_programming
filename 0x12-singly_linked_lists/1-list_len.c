#include "lists.h"

/**
 * list_len - the lenght of the linked list
 * @h: the head of the linked list
 * Return: the lenght of the LLIST
 */

size_t list_len(const list_t *h)
{
	size_t	i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
