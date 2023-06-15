#include <unistd.h>

/**
 *main - the starting point of any program in c
 * Return: 0 if success or !0 if fail
 */

int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, 58);
	write(2, "\n", 1);
	return (0);
}
