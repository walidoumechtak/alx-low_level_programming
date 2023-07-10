#include "main.h"
#include <string.h>
/**
 * str_concat - concate two string in a single buffer
 * @s1: the first string
 * @s2: the second string
 * Return: the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int	i;
	int	len;
	char	*res;
	int	j;

	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));
	len = strlen(s1) + strlen(s2);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
