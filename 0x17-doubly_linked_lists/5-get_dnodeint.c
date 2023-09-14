#include "lists.h"

/**
 * head: the head of DLL
 * index: the index of desierd node
 * Return: the searched node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int	ind;

	ind = 0;
	while (head)
	{
		if (ind == index)
			return (head);
		ind++;
		head = head->next;
	}
	return (NULL);
}
