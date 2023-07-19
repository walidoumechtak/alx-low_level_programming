#include "function_pointers.h"

/**
 * int_index - the index of the first element match
 * @array: the givern array
 * @size: the size of the array
 * @cmp: the function pointer
 * Return: the index of the match element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
