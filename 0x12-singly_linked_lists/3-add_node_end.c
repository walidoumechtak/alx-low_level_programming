#include "lists.h"

/**
 * free_all - free all node for a linkedlist
 * @head: the of the linked list
 */

void    free_all(list_t **head)
{
	while (*head != NULL)
	{
		free((*head)->str);
		(*head) = (*head)->next;
	}
}

/**
 * add_node_end - add node at the end of the linked list
 * @head: address of the head of the node
 * @str: the content of the new node
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t	*new;
	list_t	*temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (free_all(head), NULL);
	if (!str)
		new->str = strdup("");
	else
		new->str = strdup(str);
	if (!new->str)
		return (free_all(head), NULL);
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new->len = strlen(new->str);
	temp->next = new;
	return (new);
}
