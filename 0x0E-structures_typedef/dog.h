#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>

/**
 * dog_t - Typedef for dog
 */

typedef dog dog_t;

/**
 * struct dog - dog struct that containe name and other stuff
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the age of the owner
 * Description: nothing really thank you
 */

struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
