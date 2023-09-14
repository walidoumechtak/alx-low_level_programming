#include "lists.h"

/**
 * print_dlistint - print content of DLL and retrun its length
 * @h: the head of the linked list
 * Return: the length of DDL
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t	cpt;

	cpt = 0;
	while (h)
	{
		printf("%d\n", h->n);
		cpt++;
		h = h->next;
	}
	return (cpt);
}
