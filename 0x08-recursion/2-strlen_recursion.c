#include "main.h"

/**
 * _strlen_recursion - the len of a string
 * @s: the string
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	int	len;

	len = 0;
	if (*s == '\0')
	{
		return (0);
	}
	len++;
	len += _strlen_recursion(s + 1);
	return (len);
}
