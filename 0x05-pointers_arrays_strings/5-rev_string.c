#include "main.h"

/**
 * _strlen - funct that return the length of a string
 * @s: the sting
 * Return: the length
 */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * rev_string - funct that rev a string
 * @s: the string should be reversed
 */

void	rev_string(char *s)
{
	int	start;
	int	end;
	char	temp;

	start = 0;
	end = _strlen(s) - 1;
	if (end < 0)
		end = 0;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
