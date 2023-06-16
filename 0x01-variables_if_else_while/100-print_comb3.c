#include <stdio.h>

/**
 * main - the start of the program
 * Return: 0 success !0 when fail
 */

int main(void)
{
	char	*arr;
	int	i;
	int	j;

	i = 0;
	arr = "0123456789";

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(arr[i]);
			putchar(arr[j]);
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
