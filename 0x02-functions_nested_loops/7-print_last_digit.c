#include "main.h"

/**
 * print_last_digit - return last digit of an integer
 * @n: for example n = 1234 the output should 4
 * Return: the output 4
 */

int	print_last_digit(int n)
{
	int	last;

	if (n == –2147483648)
	{
		last = -(n % 10);
		_putchar(last + '0');
		return (last);
	}
	if (n < 0)
		n *= -1;
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
