#include "main.h"

/**
 * _memcpy - copy src in dest byte by byte
 * @dest: the destination buffer
 * @src: the source buufer
 * n: the size should be copyed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	if (dest == NULL && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	while (n)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
