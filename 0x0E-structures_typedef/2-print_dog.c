#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog information
 * @d: pointer to dog structure
 *
 * Description: This function prints a dog's name, age, and owner. If any
 *              of these fields are NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    char *name = d->name != NULL ? d->name : "(nil)";
    float age = d->age;
    char *owner = d->owner != NULL ? d->owner : "(nil)";

    printf("Name: %s\n", name);
    printf("Age: %.6f\n", age);
    printf("Owner: %s\n", owner);
}
