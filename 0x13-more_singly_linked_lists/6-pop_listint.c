#include "lists.h"

/**
 * pop_listint - delete the the head of the linked list
 * @head: the addr of the head
 * Return: the data in the head node (n)
 */

int pop_listint(listint_t **head)
{
	listint_t	*temp;

	temp = (*head)->next;
	*head = temp;
	return (temp->n);
}
