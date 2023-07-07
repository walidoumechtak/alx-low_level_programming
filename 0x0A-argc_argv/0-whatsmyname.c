#include <stdio.h>

/**
 * main - the start of the program
 * @ac: the size or av
 * @av: **arr of arguments
 * Return: allways 0
 */

int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", av[0]);
	return (0);
}
