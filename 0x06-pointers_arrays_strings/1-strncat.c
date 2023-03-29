#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to be appended.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0, i = 0;

    /* Calculate the length of the destination string */
    while (dest[dest_len] != '\0')
        dest_len++;

    /* Append the source string to the destination string */
    while (i < n && src[i] != '\0')
    {
        dest[dest_len] = src[i];
        i++;
        dest_len++;
    }

    /* Add the terminating null byte */
    dest[dest_len] = '\0';

    return (dest);
}
