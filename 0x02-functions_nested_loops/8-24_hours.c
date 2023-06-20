#include "main.h"

/**
 * jack_bauer - print all minit starting from 00:00 to 23:59
 * _putnbr - function that print a number 
 * @n: the number
 */

void	_putnbr(int n)
{
	if (n >= 10)
		_putnbr(n / 10);
	_putchar(n % 10 + '0');
}

void	jack_bauer(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			if (i >= 0 && i <= 9)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
				_putnbr(i);
			_putchar(':');
			if (j >= 0 && j <= 9)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
				_putnbr(j);
			_putchar('\n');
			j++;
		}
		i++;
	}
}
