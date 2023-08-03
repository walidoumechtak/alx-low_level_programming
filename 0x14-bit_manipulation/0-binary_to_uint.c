#include "main.h"

/**
 * check_all_string - check if all string is containe only digit
 * @s: the string to check
 * Return: 0 if not or 1 if there is a no digit
 */

int	check_all_string(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (isdigit(s[i]) == 0)
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * binary_to_uint - func that converts a binary number to an unsigned int
 * @b: the binarya number
 * Return: the conveted number
 */

unsigned int binary_to_uint(const char *b)
{
	if (!b || check_all_string(b) == 0)
		return (0);
}
