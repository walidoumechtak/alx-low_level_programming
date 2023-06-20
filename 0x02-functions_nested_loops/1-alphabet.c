#include "main.h"

/**
 * print_alphabet - function that print the alpha in lower case
 */

void print_alphabet(void)
{
	int	s;

	s = 'a';
	while (s <= 'z')
	{
		_putchar(s);
		s++;
	}
	_putchar('\n');
}
