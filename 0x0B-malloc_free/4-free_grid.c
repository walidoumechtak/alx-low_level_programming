#include "main.h"
#include <string.h>

/**
 * free_grid - free a grid
 * @grid: the grid should be freed
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(grid[i++]);
	}
	free(grid);
}
