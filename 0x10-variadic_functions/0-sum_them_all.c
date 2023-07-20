#include "variadic_functions.h"

/**
 * sum_them_all - sum all the number passed as argument
 * @n: the size of argument passed
 * Return: 0 when n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list	lst;
	unsigned int	i;
	int	sum;

	sum = 0;
	i = 0;
	if (n == 0)
		return (0);
	va_start(lst, n);
	while (i < n)
	{
		sum += va_arg(lst, int);
		i++;
	}
	return (sum);
}
