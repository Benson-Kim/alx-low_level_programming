#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Description: dog structure containing its name, age and owner.
 */
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);

#endif /* DOG_H */
