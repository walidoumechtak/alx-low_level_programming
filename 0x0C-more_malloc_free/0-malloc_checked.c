#include "main.h"

/**
 * malloc_checked - check for the memory that allocated
 * @b: the size that should be allocated
 * Return: the pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void	*ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
