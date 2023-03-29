#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, i = 0;

    /* Calculate the length of the destination string */
    while (dest[dest_len] != '\0')
        dest_len++;

    /* Append the source string to the destination string */
    while (src[i] != '\0')
    {
        dest[dest_len] = src[i];
        i++;
        dest_len++;
    }

    /* Add the terminating null byte */
    dest[dest_len] = '\0';

    return (dest);
}
