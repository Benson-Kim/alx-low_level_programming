#include <stdio.h>

/**
 * main - Computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0 on success
 */

int main(void)
{
    int i, sum;

    sum = 0;

    /* Iterate over all numbers below 1024 */
    for (i = 0; i < 1024; i++)
    {
        /* If i is a multiple of 3 or 5, add it to the sum */
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    /* Print the sum */
    printf("%d\n", sum);

    return 0;
}
