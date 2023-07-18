#include "dog.h"

/**
 * init_dog - function that init the struct dog
 * @d: the struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
