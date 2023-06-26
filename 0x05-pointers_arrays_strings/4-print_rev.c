#include "main.h"

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
