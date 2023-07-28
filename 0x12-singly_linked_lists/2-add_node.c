#include "lists.h"

/**
 * _strlen - func that calc the length of str
 * @str: the string
 * Return: the length
 */

int	_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * free_all - free all node for a linkedlist
 * @head: the of the linked list
 */

void	free_all(list_t **head)
{
	while (*head != NULL)
	{
		free((*head)->str);
		(*head) = (*head)->next;
		free(*head);
	}
}

/**
 * add_node - func that a node to the beginning of linked list
 * @head: the head of linked list
 * @str: string content of the node
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t	*new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (free_all(head), NULL);
	if (!str)
		new->str = strdup("");
	else
	{
		new->str = strdup(str);
		if (!new->str)
			return (free_all(head), NULL);
	}
	new->len = _strlen(str);
	if (head == NULL || !*head)
		head = &new;
	else
	{
		new->next = *head;
	}
	return (new);
}
