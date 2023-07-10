#include "main.h"

/**
 * create_array - create array with malloc and return it
 * @size: the size of the array
 * @c: the char that will fill with
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	char	*str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	for (int i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
