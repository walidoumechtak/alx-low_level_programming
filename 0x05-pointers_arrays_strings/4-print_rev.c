#include "main.h"

/**
 * _strlen - len of string
 * @s: the string
 * Return: length
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * print_rev - functin that  print string in reverse mode
 * @s: the sting
 */

void	print_rev(char *s)
{
	int	len;

	len = _strlen(s) - 1;
	while (len >= 0)
	{
		write(1, &s[len], 1);
		len--;
	}
	write(1, "\n", 1);
}
