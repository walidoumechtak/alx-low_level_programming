#include "main.h"

/**
 * puts2 - funct that print a string 2 by 2
 * @str: the string
 */

void	puts2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		if (s[i] == '\0')
			break;
		i++;
		if (s[i] == '\0')
			break;
	}
	write(1, "\n", 1);
}
