#include <stdio.h>

/**
 * main - Prints the sum of even-valued terms in the Fibonacci
 *	    up to 4,000,000
 *
 * Return: 0 on success
 */

int main(void)
{
<<<<<<< HEAD
    unsigned long int a = 1, b = 2, c;

    printf("%lu, %lu", a, b);

    for (int i = 2; i < 98; i++)
    {
        c = a + b;
        printf(", %lu", c);
        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}
=======
	int i;
	unsigned long int a = 1, b = 2, c;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
>>>>>>> 79d7e41dbd308981339339160233cd66d04e98e7
