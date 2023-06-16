#include <stdio.h>

/**
 * main - the start of the prog
 * Return: 0 when success !0 when fail
 */

int main(void)
{
	char	*arr;
	int	i;

	i = 0;
	arr = "0123456789ABCDEF";
	while (i <= 15)
		putchar(arr[i++]);
	putchar('\n');
	return (0);
}
