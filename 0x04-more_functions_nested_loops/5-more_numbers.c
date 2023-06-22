#include "main.h"

/**
 * more_numbers - func that print from 0 to 14 10 times followed be new line
 */

void more_numbers(void)
{
	int	i;
	char	*arr;
	int	s;

	arr = "01234567891011121314";
	i = 0;
	while (i < 10)
	{
		s = 0;
		while (arr[s])
			_putchar(arr[s++]);
		_putchar('\n');
		i++;
	}
}
