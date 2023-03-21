#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	long int prev, curr, next;

	/* Initialize the first two Fibonacci numbers */
	prev = 1;
	curr = 2;

	/* Print the first two Fibonacci numbers */
	printf("%ld, %ld, ", prev, curr);

	/* Compute and print the next 48 Fibonacci numbers */
	for (i = 3; i <= 50; i++)
	{
	    /* Compute the next Fibonacci number */
	    next = prev + curr;

	    /* Print the next Fibonacci number */
	    printf("%ld", next);

	    /* If this is not the last number, print a comma and space */
	    if (i < 50)
	        printf(", ");

	    /* Update the previous two Fibonacci numbers */
	    prev = curr;
	    curr = next;
	}

	/* Print a newline to end the output */
	printf("\n");

	return 0;
}
