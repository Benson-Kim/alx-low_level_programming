#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @n: The number to find the largest prime factor of
 * Return: The largest prime factor of the given number
 */
long largest_prime_factor(long n)
{
	long factor = 2;

	while (n > factor)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	return factor;
}

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	long largest_factor = largest_prime_factor(n);

	printf("%ld\n", largest_factor);

	return (0);
}

