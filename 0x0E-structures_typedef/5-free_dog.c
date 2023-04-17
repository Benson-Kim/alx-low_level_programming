#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for dog_t instance
 * @d: pointer to dog_t instance
 *
 * Description: This function frees the memory allocated for the given dog_t
 *              instance, including the name and owner strings.
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}
