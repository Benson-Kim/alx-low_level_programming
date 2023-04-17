#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: pointer to dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Description: This function initializes a dog structure with the given
 *		      name, age, and owner.
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

