#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Array of integers.
 * @n: Number of elements of the array.
 *
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	/* Swap the elements from the beginning and the end of the array */
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
