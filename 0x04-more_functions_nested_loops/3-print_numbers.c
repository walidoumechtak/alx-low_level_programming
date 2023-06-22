#include "main.h"

/**
 * print_numbers - funct that print numbers
 */

void	print_numbers(void)
{
	int	s;

	s = '0';
	while (s <= '9')
	{
		_putchar(s++);
	}
	_putchar('\n');
}
