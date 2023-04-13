#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size of the memory block to allocate
 *
 * Return: a pointer to the newly allocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL) {
	        free(ptr);
	        return (NULL);
	}

	if (ptr == NULL) {
	        return (malloc(new_size));
	}

	if (new_size == old_size) {
	        return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL) {
	        return (NULL);
	}

	old_ptr = ptr;
	for (i = 0; i < old_size && i < new_size; i++) {
	        new_ptr[i] = old_ptr[i];
	}

	free(ptr);
	return (new_ptr);
}
