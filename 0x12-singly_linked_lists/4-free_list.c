#include "lists.h"

/**
 * free_list - free all the linked list
 * @head: the head of linked list that should be freed
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str)
			free(head->str);
		free(head);
		head = head->next;
	}
}
