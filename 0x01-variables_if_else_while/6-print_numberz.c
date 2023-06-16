#include <stdio.h>

/**
 * main - the starting point of every program
 * Return: 0 if success or !0 if fail
 */

int main(void)
{
	int     s;

	s = '0';
	while (s <= '9')
		putchar(s++);
	putchar('\n');
	return (0);
}
