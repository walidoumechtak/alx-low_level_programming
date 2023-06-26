#include "main.h"

/**
 * _puts - function that puts a stirng in standard output
 * @str: the string should be puted
 */

void	_puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
