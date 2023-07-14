#include "main.h"
#include <string.h>

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
	int	i;
	int	j;

	if (!s1 && !s2)
		return (strdup(""));
	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));
	str = malloc(strlen(s1) + n + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (i < n && s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}
