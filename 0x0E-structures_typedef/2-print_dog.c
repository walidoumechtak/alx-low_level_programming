#include "dog.h"

/**
 * print_dog - function that print elemnts of the structs
 * @d: the strcut that conataine all elements
 */

void	print_dog(struct dog *d)
{
	if (!d)
		return ;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}