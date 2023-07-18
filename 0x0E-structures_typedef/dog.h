#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct dog - dog struct that containe name and other stuff
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the age of the owner
 * Description: nothing really thank you
 */

typedef struct dog
{
	char	*name;
	float	age;
	char	*owner;
}	dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H_ */
