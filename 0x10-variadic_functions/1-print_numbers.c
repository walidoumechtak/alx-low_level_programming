#include "variadic_functions.h"

/**
 * print_numbers - print all number passed as argument
 * @separator: the char that should printed between numbers
 * @n: the size of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int	i;

	i = 0;
	va_start(lst, n);
	while (i < n)
	{
		printf("%d", va_arg(lst, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
