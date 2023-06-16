#include <stdio.h>

/**
 * main - the start of the prog
 * Return: 0 success !0 fail
 */

int main(void)
{
	int	s;

	s = 'z';
	while (s >= 'a')
		putchar(s--);
	putchar('\n');
	return (0);
}
