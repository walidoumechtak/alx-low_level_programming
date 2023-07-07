#include <stdio.h>

/**
 * main - the start of the program
 * @ac: the size of av
 * @av: the array of arguments
 * Return: allways 0
 */

int main(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
