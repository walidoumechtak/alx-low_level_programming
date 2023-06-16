#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the start of every program
 * Return: 0 if success or !0 if not
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
