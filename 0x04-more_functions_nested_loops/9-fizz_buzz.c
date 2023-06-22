#include "main.h"

/**
 * _putstr - functoin that print a string 
 * @str: the string
 */

void	_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
}

void	_putnbr(int n)
{
	if (n > 10)
		_putnbr(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * main - start of the program
 * Return: always 0
 */

int main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			_putstr("FizzBuzz");
		else if (i % 3 == 0)
			_putstr("Fizz");
		else if (i % 5 == 0)
			_putstr("Buzz");
		else
			_putnbr(i);
		if (i != 100)
				_putchar(' ');
		i++;
	}
	_putchar('\n');
	return (0);
}
