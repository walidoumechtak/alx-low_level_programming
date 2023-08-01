#include "lists.h"

/**
 * print_listint - funct that print all list int
 * @h: the head of linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t	i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
