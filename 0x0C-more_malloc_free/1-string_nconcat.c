#include "main.h"

/**
 * string_nconcat - concat two string
 * @s1: the first string
 * @s2: the second string
 * @n: how mnay byte should take from s2
 * Return: the concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char	*str;

	if (!s1 && !s2)
		return (strdup(""));
	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));

}
