#include "main.h"

/**
 * int_index - Searches for an integer in an array
 *
 * @array: Array to search in
 * @size: Size of the array
 * @cmp: Pointer to a function that takes an int argument and returns an int
 *
 * Return: Index of the first matching element, or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

