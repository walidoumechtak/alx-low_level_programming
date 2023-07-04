#include "main.h"

/**
 * _memset - fill first n byte with constant c
 * @s: the buufuer to fill
 * @b: to fill with
 * @n: size to fill
 * Return: the string s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str++ = (unsigned char)b;
	}
	return (s);
}
