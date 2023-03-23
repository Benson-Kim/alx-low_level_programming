#include "main.h"

/**

more_numbers - prints the numbers from 0 to 14 ten times

Return: void
*/
void more_numbers(void)
{
    int i, j;
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i <= 14; i++)
        {
            if (i > 9) /* for numbers greater than 9, print 2 digits */
            {
                _putchar((i / 10) + '0');
            }
            _putchar((i % 10) + '0');
        }
        _putchar('\n');
    }
}