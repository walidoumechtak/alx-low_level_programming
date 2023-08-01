#include "lists.h"

/**
 * add_nodeint - add node the beginning of linedlist
 * @head: the address of the head
 * @n: the new int of the new node
 * Return: the add of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t	*new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (free_all(*head), NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL)
	{
		head = &new;
		return (new);
	}
	new->next = *(head);
	return (new);
}
