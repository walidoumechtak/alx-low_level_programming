#include "main.h"
#include <string.h>

/**
 * _strncat - funct that append src in dest
 * @dest: the dest string
 * @src: the src string
 * @n: n byte that should be copyed
 * Return: new string concatenated
 */

char	*_strncat(char *dest, char *src, int n)
{
	int     i;
	int     len;
	
	len = strlen(dest);
	i = 0;
	while (src[i] && i < n)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
