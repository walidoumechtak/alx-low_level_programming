#include <stdio.h>

/**
 * main - the start of the program
 * Return: 0 success !0 when fail
 */

int main(void)
{
	int	s;

	s = '0';
	while (s <= '9')
	{
		putchar(s);
		if (s < '9')
		{
			putchar(',');
			putchar(' ');
		}
		s++;
	}
	putchar('\n');
	return (0);
}
