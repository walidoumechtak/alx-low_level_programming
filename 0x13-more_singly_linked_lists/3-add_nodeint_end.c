#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the linked list
 * @head: add of the head of linked list
 * @n: the integer insdie the node
 * Return: the add of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new;
	listint_t	*temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL || *head = NULL)
	{
		head = &new;
		return (new);
	}
	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
