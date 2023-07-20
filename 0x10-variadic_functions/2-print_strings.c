#include "variadic_functions.h"

/**
 * print_strings - print all number passed as argument
 * @separator: the char that should printed between numbers
 * @n: the size of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int    i;

	i = 0;
	va_start(lst, n);
	while (i < n)
	{
		printf("%s", va_arg(lst, char *));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
