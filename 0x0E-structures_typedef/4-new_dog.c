#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog instance
 * @name: pointer to name string
 * @age: dog's age
 * @owner: pointer to owner string
 *
 * Description: This function creates a new instance of the dog_t structure
 *              with the given name, age, and owner. It allocates memory
 *              for the structure and copies the name and owner strings.
 *              If the memory allocation fails, it returns NULL.
 *
 * Return: pointer to new dog_t instance, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    /* Allocate memory for dog_t instance */
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    /* Allocate memory for name and owner strings */
    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return NULL;
    }

    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
