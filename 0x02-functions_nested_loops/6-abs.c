#include "main.h"

/**
 * abs - function that return the absolute value of an number (int)
 * @n: the integer that we want to compute the absolute value
 * Return: the absolute value
 */

int	_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
