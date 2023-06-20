#include "main.h"

/**
 * main - the start of every program
 * Return: 0 success or !0 when fail
 */

int main(void)
{
	char	*arr;
	int	i;

	i = 0;
	arr = "_putchar\n";
	while (arr[i])
	{
		_putchar(arr[i++]);
	}
	return (0);
}
