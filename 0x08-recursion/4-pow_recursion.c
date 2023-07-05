#include "main.h"

/**
 * pow_recursion - the power of number
 * @x: the int x
 * @y: the int y
 * Return: the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x  * _pow_recursion(x, y - 1));
}
