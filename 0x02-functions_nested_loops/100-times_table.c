include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 *
 * @n: The integer whose times table is to be printed
 *
 * Return: None
 */

void print_times_table(int n)
{
	/* Check if n is within the range of 0 to 15 */
	if (n < 0 || n > 15)
		return;

	int i, j, product;

	/* Print the times table */
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;
			/* Print the product with proper formatting */
			if (j == 0)
				printf("%d", product);
			else
				printf(" %3d", product);
		}
		printf("\n");
	}
}

