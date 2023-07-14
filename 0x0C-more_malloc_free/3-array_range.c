#include "main.h"

/**
 * array_range - create array conataine from min to max ordered
 * @min: the min number
 * @max: the max number
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	if (min > max)
		return (NULL);
	size = max - min;
	if (size == 0)
		size = 1;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (min <= max)
		arr[i++] = min++;
	return (arr);
}
