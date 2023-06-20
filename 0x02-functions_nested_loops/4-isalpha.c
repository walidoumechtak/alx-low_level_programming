#include "main.h"

/**
 * _isalpha - function that check if a char is alpha or not
 * @c: the char that should be checked
 * Return: 1 if c is alpha 0 if not
 */

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
