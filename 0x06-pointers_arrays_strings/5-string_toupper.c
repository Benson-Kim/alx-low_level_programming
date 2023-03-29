#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: String to be converted.
 *
 * Return: Pointer to the resulting string.
 */
char *string_toupper(char *str)
{
    char *p = str;

    /* Iterate over each character of the string */
    while (*p)
    {
        /* If character is lowercase, convert it to uppercase */
        if (*p >= 'a' && *p <= 'z')
            *p -= 32;

        p++; /* Move to the next character */
    }

    return (str);
}
