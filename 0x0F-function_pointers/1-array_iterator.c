#include "main.h"

/**
 * array_iterator - Applies a function to each element of an array
 *
 * @array: Array to iterate over
 * @size: Size of the array
 * @action: Pointer to a function that takes an int argument
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

