#include "main.h"

/**
 * _strlen - the length of a function
 * @str: the tstring
 * Return: length of str
 */

int	_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * puts_half - function that print thalf of a string
 * @str: the string
 */

void	puts_half(char *str)
{
	int	i;
	int	len;

	len = _strlen(str);
	if (len % 2 != 0)
		i = (len) / 2;
	else
		i = (len) / 2;
	while (i < len)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
