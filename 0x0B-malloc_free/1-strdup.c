#include "main.h"
#include <string.h>

/**
 * _strdup - function that create a new string from an old onw
 * @str: the old string
 * Return: the new stirng allocated
 */

char *_strdup(char *str)
{
	int	i;
	char	*new;

	i = 0;
	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(char) * strlen(str));
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
