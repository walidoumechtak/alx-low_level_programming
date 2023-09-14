#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of DDL
 * @head: the addr of the head of DLL
 * @n: the content of the new linkedlist
 * Return: the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*new;

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
		new->next = *head;
		*head = new;
	}
	return (new);
}
