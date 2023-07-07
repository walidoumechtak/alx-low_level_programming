#include <stdio.h>

/**
 * main - the start of the program
 * @ac: the size of av
 * @av: an array of arguments
 * Return: allways 0
 */

int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
