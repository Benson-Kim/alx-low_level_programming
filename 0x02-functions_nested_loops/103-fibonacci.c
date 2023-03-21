#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, separated by comma and space
 *
 * Return: 0 on success
 */

int main(void)
{
    int i, n = 98;
    unsigned int fib1 = 1, fib2 = 2, next;

    /* Print the first two Fibonacci numbers */
    printf("%u, %u", fib1, fib2);

    /* Compute and print the remaining 96 Fibonacci numbers */
    for (i = 3; i <= n; i++)
    {
        next = fib1 + fib2;
        printf(", %u", next);

        /* Shift the variables to prepare for the next iteration */
        fib1 = fib2;
        fib2 = next;

        /* If the next Fibonacci number overflows, exit the loop */
        if (fib2 < fib1)
            break;
    }

    printf("\n");

    return 0;
}
