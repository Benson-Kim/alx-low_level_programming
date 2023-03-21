#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued terms in the Fibonacci sequence
 *        up to 4,000,000
 *
 * Return: 0 on success
 */

int main(void)
{
    int i;
    unsigned int fib1 = 1, fib2 = 2, next, sum = 0;

    /* Add the first two Fibonacci numbers to the sum if they are even */
    if (fib2 % 2 == 0)
        sum += fib2;

    /* Compute the remaining Fibonacci numbers and add the even ones to the sum */
    for (i = 3; fib2 <= 4000000; i++)
    {
        next = fib1 + fib2;

        /* Add the next Fibonacci number to the sum if it is even */
        if (next % 2 == 0)
            sum += next;

        /* Shift the variables to prepare for the next iteration */
        fib1 = fib2;
        fib2 = next;
    }

    printf("%u\n", sum);

    return 0;
}