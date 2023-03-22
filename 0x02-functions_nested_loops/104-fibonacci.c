#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci sequence
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
