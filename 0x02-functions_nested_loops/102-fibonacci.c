#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, separated by comma and space
 *
 * Return: 0 on success
 */

int main(void)
{
    int i, n = 50;
    unsigned long long fib1 = 1, fib2 = 2, next;

    /* Print the first two Fibonacci numbers */
    printf("%llu, %llu", fib1, fib2);

    /* Compute and print the remaining 48 Fibonacci numbers */
    for (i = 3; i <= n; i++)
    {
        next = fib1 + fib2;
        printf(", %llu", next);
        fib1 = fib2;
        fib2 = next;
    }

    printf("\n");

    return 0;
}
