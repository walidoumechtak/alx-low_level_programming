#include "main.h"

/*
 * _puts_recursion - print string with recursion
 * @s: the string should be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return ;
	}
	write(1, &s[0], 1);
	_puts_recursion(s + 1);
}
