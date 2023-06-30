#include "main.h"

/**
 * string_toupper - functin that tranforme every char to upper
 * @s: the string
 * Return: the new string of UPPER casse
 */

char *string_toupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		s[i] += 32;
		i++;	
	}
	return (s);
}
