#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int count, n1 = 1, n2 = 2, n3;

	printf("%d, %d", n1, n2);

	for (count = 2; count < 50; count++)
	{
		n3 = n1 + n2;
		printf(", %d", n3);
		n1 = n2;
		n2 = n3;
	}

	printf("\n");

	return (0);
}

