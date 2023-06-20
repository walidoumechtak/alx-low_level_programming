#inlcude "main.h"

/**
 * _islower - function that check if a char is lower or not
 * @c: the char that should be checked
 * Return: 1 if is lower 0 if not
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
