#include "lists.h"

/**
 * dlistint_len - func that return the length of Dlinkedlist
 * @h: the head of the linkedlist
 * Return: the length of DLL
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
