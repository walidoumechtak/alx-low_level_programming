#include "dog.h"
#include <string.h>

/**
 * new_dog - function that alloc a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t	*new_dog;
	char	*new_n;
	char	*new_o;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (0);
	new_n = malloc(strlen(name) * sizeof(char));
	if (!new_n)
		return (0);
	new_o = malloc(strlen(owner) * sizeof(char));
	if (new_o)
		return (0);
	strcpy(new_n, name);
	strcpy(new_o, owner);
	new_dog->name = new_n;
	new_dog->age = age;
	new_dog->owner = new_o;
	return (new_dog);
}
