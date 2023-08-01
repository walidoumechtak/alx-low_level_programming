#include "lists.h"

/**
 * listint_len - funct that reutnr the number of node in a linked list
 * @h: the head of the linked list
 * Return: the length
 */

size_t listint_len(const listint_t *h)
{
	size_t	i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
