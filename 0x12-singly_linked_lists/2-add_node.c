#include "lists.h"

/**
 * _strlen - func that calc the length of str
 * @str: the string
 * Return: the length
 */

int	_strlen(char *str)
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
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	return (new);
}
