#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: Size of the memory block to be allocated
 *
 * Return: Pointer to the allocated memory
 *		 If malloc fails, exit with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

