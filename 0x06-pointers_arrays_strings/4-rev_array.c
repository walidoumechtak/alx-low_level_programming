#include "main.h"

/**
 * reverse_array - reverser array of integer
 * @a: the array
 * @n: size of the array
 */

void	reverse_array(int *a, int n)
{
	int	s;
	int	e;

	s = 0;
	e = n - 1;
	while (s < e)
	{
		if (e > s)
			break;
		a[s] = a[e];
		s++;
		e--;
	}
}
