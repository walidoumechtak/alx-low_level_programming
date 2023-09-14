#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: the addr of the head of DLL
 * @index: the desier index
 * Return: 1 if success of 0 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int	i;
	dlistint_t	*temp;
	dlistint_t	*pv;
	dlistint_t	*nt;

	temp = *head;
	nt = NULL;
	i = 0;
	if (!head || !*head)
		return (-1);
	while (temp)
	{
		if (i == index)
			break;
		i++;
		temp = temp->next;
	}
	if (index > 0)
	{
		pv = temp->prev;
		nt = temp->next;
		pv->next = nt;
		nt = pv;
	}
	else
	{
		*head = temp->next;
		temp->prev = NULL;
	}
	free(temp);
	return (1);
}
