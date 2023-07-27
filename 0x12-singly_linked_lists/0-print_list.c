#include "lists.h"

/**
 * print_list - print all element of the linked list
 * @h: the head of the linked list
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t	i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
