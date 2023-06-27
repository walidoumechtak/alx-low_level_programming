#include "main.h"

/**
 * _strcpy - funct that copy src in dest
 * @dest: the dest buffer
 * @src: the src where i will find the string
 * Return: the copyed string
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
