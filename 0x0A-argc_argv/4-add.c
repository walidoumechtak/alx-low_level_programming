#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * check_arg - check if all arguments is digit or not
 * @av: the array of arguments
 * Return: 1 if ture 0 if not
 */

int	check_arg(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (isdigit(av[i][j]) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/**
 * main - the start of the program
 * @ac: the size of av
 * @av: the array of arguments
 * Return: allways 0
 */

int main(int ac, char **av)
{
	int	r_value;
	int	i;
	int	sum;

	r_value = check_arg(av);
	if (r_value == 0)
	{
		printf("Error\n");
		return (1);
	}
	i = 1;
	sum = 0;
	if (ac > 1)
	{
		while (av[i])
		{
			sum += atoi(av[i]);
			i++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
