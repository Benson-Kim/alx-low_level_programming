#include <stdio.h>

/**
 * main - Prints the sum of even-valued terms in the Fibonacci
 *	    up to 4,000,000
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, c;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
