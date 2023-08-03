#include "main.h"

/**
 * print_binary - print n in base format
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	int	num_bits;
	int	i;
	unsigned long	int	mask;
	int	flag;

	flag = 0;
	num_bits = 8 * sizeof(unsigned long int);
	i = num_bits;
	while (i - 1 >= 0)
	{
		mask = 1UL << i;
		if (n & mask)
		{
			printf("1");
			flag = 1;
		}
		else if (flag)
			printf("0");
		i--;
	}
	if (!flag)
		printf("0");
	printf("\n");
}
