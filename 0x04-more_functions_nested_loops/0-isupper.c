#include "main.h"

/**
 * _isupper - check if an upper case or not
 * @c: the char
 * Return: 1 if is upper and 0 if not
 */

int _isupper(int c)
{
	if (c >='A' && c <= 'Z')
		return (1);
	return (0);
}
