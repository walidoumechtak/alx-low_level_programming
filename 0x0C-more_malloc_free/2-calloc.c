#include "main.h"

/**
 * _calloc - functin similaire to calloc
 * @nmemb: size of the array
 * @size: the size of each element in the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void	*ptr;
	unsigned int	i;
	unsigned int	len;

	len = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
		ptr[i++] = 0;
	return (ptr);
}
