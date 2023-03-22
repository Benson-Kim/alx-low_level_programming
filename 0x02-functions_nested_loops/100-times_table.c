#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times to print the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15) /* Check if n is within the valid range */
	    return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j); /* Print the product of i and j */
			if (j < n)           /* Print a tab character if not at the last column */
				printf(",\t");
		}
		printf("\n"); /* Move to the next row */
	}
}
