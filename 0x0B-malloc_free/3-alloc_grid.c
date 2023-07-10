#include "main.h"
#include <string.h>

/**
 * freeall - free all element of the array
 * @arr: the double pointer
 * @size: the that should be freed
 */

void	freeall(int	**arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(arr[i++]);
	free(arr);
}

/**
 * fille_inside - fill the intern alloc
 * @inside: the array
 * @w: the width or the size of inside
 */

void	fille_inside(int *inside, int w)
{
	int	i;

	i = 0;
	while (i < w)
	{
		inside[i] = 0;
		i++;
	}
}

/**
 * alloc_grid - alooc for two demension array
 * @width: the widht of the grid
 * @height: the height of the grid
 * Return: return the dimension array
 */

int	**alloc_grid(int width, int height)
{
	int	i;
	int	**arr;
	int	*inside;
	
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < height)
	{
		inside = malloc(width * sizeof(int));
		if (!inside)
			return (freeall(arr, i), NULL);
		fille_inside(inside, width);
		arr[i] = inside;
		i++;
	}
	return (arr);
}
