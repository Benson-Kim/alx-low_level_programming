#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
    int len = 0;
    int i, j;
    char temp;

    /* Find the length of the string */
    while (s[len] != '\0')
        len++;

    /* Reverse the string */
    i = 0;
    j = len - 1;
    while (i < j)
    {
        /* Swap the characters at positions i and j */
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        /* Move the indices towards the center */
        i++;
        j--;
    }
}
