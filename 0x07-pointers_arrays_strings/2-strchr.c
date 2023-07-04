#include "main.h"

/**
 * _strchr - search for the first occurence in a string
 * @s: the string
 * @c: the charactere
 * Return: the firt occurence of c in s
 */

char	*_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (*s == c)
			return (s);
		*s++;
		i++;
	}
	return (NULL);
}
