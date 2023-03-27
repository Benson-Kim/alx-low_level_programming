#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a : pointer to the first integer to swap
 * @b : pointer to the second integer to swap
 *
 * Return : void
 */
void swap_int(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}