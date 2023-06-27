#include "main.h"

/**
 * _strlen - the length of a function
 * @str: the tstring
 * Return: length of str
 */

int	_strlen(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
		;
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

	i = 0;
	len = _strlen(str) - 1;
	while (i <= len / 2)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
