#inlcude "dog.h"

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

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
