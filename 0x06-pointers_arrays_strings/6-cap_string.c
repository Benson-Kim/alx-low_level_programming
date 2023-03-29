#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: String to be capitalized.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
    char *p = str;

    /* Iterate over each character of the string */
    while (*p)
    {
        /* If character is lowercase and its preceding character is a word separator, convert it to uppercase */
        if (*p >= 'a' && *p <= 'z' &&
            (*(p - 1) == ' ' || *(p - 1) == '\t' || *(p - 1) == '\n' ||
             *(p - 1) == ',' || *(p - 1) == ';' || *(p - 1) == '.' ||
             *(p - 1) == '!' || *(p - 1) == '?' || *(p - 1) == '"' ||
             *(p - 1) == '(' || *(p - 1) == ')' || *(p - 1) == '{' ||
             *(p - 1) == '}'))
            *p -= 32;

        p++; /* Move to the next character */
    }

    return (str);
}
