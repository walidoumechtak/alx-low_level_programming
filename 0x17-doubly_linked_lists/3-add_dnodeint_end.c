#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of DLL
 * @head: the addr off head of DLL
 * @n: the value of integer n
 * Return: the new node or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*new;
	dlistint_t	*temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!head)
		head = &new;
	else if (!*head)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
