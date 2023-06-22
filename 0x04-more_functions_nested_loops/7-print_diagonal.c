#include "main.h"

/**
 * print_diagonal - print a diagonal with \
 * @n: size of the diagonal
 */

void	print_diagonal(int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j <= i)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
