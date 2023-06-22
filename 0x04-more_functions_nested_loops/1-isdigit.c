#include "main.h"

/**
 * _isdigit - functoin check that if an int is digit
 * @c: the char
 * Return: 1 if true 0 if not
 */

int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
