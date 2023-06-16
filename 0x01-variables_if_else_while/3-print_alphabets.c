#include <stdio.h>

/**
 * main - the start of every program
 * Return: 0 if success !0 if fail
 */

int main(void)
{
        int     s;

        s = 'a';
        while (s <= 'z')
                putchar(s++);
	s = 'A';
	while (s <= 'Z')
		putchar(s++);
        putchar('\n');
        return (0);
}
