#include "main.h"

/**
 * print_array - print element of an array
 * @a: the array
 * @n: how mnay element in the array
 */

void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
