#include "main.h"
#include <string.h>

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

int **alloc_grid(int width, int height)
{
	int     i;
	int     **arr;
	int     *inside;
	
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
			return (NULL);
		fille_inside(inside, width);
		arr[i] = inside;
		i++;
	}
	return (arr);
}
