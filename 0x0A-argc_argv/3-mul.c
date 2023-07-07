#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - the stat of the program
 * @ac: the size of av
 * @av: the array of arguments
 * Return: allways 0
 */

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int	a;
		int	b;
		int	res;

		a = atoi(av[1]);
		b = atoi(av[2]);
		res = a * b;
		printf("%d\n", res);
		return (0);
	}
	printf("Error\n");
	return (1);
}
