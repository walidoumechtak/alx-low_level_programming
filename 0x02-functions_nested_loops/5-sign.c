#include "main.h"

/**
 * print_sign - function that print the sing of an int
 * @n: the number that should be checked for sign
 * Return: 1 if n is + -1 if n negative 0 if n is zero
 */

int	print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (1);
	else
		return (0);
}
