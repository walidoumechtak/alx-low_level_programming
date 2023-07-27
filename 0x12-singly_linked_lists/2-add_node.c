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
 * add_node - func that a node to the beginning of linked list
 * @head: the head of linked list
 * @str: string content of the node
 * Return: the address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t	*new;

	new = malloc(sizeof(list_t));
	if (!new || !str)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	if (head == NULL || !*head)
		head = &new;
	{
		new->next = *head;
	}
	return (new);
}
