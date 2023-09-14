#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index idx
 * @h: the addr of the head
 * @idx: the place where to insert the new node
 * @n: the value of data n inside the node
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t	*temp;
	unsigned int	i;
	dlistint_t	*new;
	dlistint_t	*pv;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	temp = *h;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	i = 0;
	if (!h || !*h)
		return (NULL);
	while (temp->next)
	{
		if (i == idx)
			break;
		i++;
		temp = temp->next;
	}
	pv = temp->prev;
	new->next = temp;
	new->prev = temp->prev;
	pv->next = new;
	temp->prev = new;

	return (new);
}
