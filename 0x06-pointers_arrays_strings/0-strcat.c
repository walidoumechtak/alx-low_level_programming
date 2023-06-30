#include "main.h"
#include <string.h>

/**
 * _strcat - funct that append src in dest
 * @dest: the dest string
 * @src: the src string
 * Return: new string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	len = strlen(dest);
	i = 0;
	while (src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
