#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal > 0 if s1 is grether that s2 and < 0 if s1 is less than s2
 */

int	_strcmp(char *S1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
