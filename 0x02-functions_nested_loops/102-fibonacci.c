#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	long int n1 = 1, n2 = 2, n3;

	printf("%lu, %lu", n1, n2);

	for (count = 3; count <= 50; count++)
	{
		printf(", %d", n3);
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}

	printf("\n");

	return (0);
}

