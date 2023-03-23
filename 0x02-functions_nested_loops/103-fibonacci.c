#include <stdio.h>

/**
 * main - prints the sum of even-valued terms in the Fibonacci sequence
 *	    whose values do not exceed 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	int prev = 1;
	int curr = 2;
	int sum = 2;
	int next;

	while (curr <= 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		if (curr % 2 == 0)
			sum += curr;
	}

	printf("%d\n", sum);

	return (0);
}

