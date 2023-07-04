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
	while (n)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
