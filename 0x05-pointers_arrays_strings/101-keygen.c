#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int password[6];
    int i, sum;

    srand(time(NULL)); /* initialize random number generator */

    /* generate random password */
    for (i = 0; i < 5; i++)
    {
        password[i] = rand() % 10;
        sum += password[i];
        putchar(password[i] + '0');
    }

    /* generate last character based on sum of previous characters */
    password[5] = (sum ^ 0xef) & 0xff;
    putchar(password[5] + '0');

    putchar('\n');

    return (0);
}
