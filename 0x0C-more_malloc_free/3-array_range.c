#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: a pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int i, len = max - min + 1;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min + i;

	return (arr);
}

