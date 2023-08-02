#include "lists.h"

/**
 * free_listint2 - free all node of linked list
 * @head: the addr of the head
 */

void free_listint2(listint_t **head)
{
	listint_t	*temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
