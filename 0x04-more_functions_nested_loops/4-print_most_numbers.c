#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 end 4
 */

void print_most_numbers(void)
{
	int     s;

	s = '0';
	while (s <= '9')
	{
		if (s != '2' && s != '4')
			_putchar(s++);
		else
			s++;
	}
	_putchar('\n');
}
