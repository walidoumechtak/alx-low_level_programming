#include "main.h"

/**
 * print_line - draw straight line in terminal
 * @n: the length of the line
 */

void print_line(int n)
{
	int	i;

	i = 0;
	while (i++ < n)
		_putchar('_');
	_putchar('\n');
}
