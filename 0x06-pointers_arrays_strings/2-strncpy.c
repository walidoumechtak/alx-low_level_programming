#include "main.h"

/**
 * _strncpy - copy n byte from src to dest
 * @dest: dest buffer
 * @src: src string
 * @n: n bytes
 * Return: dest string (new string)
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
