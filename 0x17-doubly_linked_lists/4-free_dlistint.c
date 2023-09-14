#include "lists.h"

/**
 * free_dlistint - free DLL
 * @head: the head of DLL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t	*temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
