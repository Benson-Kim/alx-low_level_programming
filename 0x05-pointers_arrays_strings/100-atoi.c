#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if there are no numbers
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    if (!s)
        return 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            sign = -sign;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            result = result * 10 + (s[i] - '0');
        }
        else if (result > 0)
        {
            /* stop at first non-digit after digits */
            break;
        }

        i++;
    }

    return (sign * result);
}
