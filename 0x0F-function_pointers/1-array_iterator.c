#include "function_pointers.h"

/**
 * array_iterator - iterate an array
 * @array: the array given
 * @size: the size of the array
 * @action: function pointer giver
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
