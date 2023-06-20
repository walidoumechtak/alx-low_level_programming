#include "main.h"

/**
 * print_alphabet_x10 - function that print x10 alpha in lowercase
 */

void print_alphabet_x10(void)
{
	int	s;
	int	i;

	i = 0;
	while (i < 10)
	{
		s = 'a';
		while (s <= 'z')
		{
			_putchar(s);
			s++;
		}
		_putchar('\n');
		i++;
	}
}
