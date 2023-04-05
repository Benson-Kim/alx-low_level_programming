#include "main.h"

/**
 * is_prime_number - Checks whether a given number is prime
 * @n: The number to be checked
 *
 * Return: 1 if n is prime
 *         0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Recursive helper function for checking primality
 * @n: The number to be checked
 * @div: The divisor to be checked
 *
 * Return: 1 if n is prime
 *         0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (div > n / 2)
		return (1);
	if (n % div == 0)
		return (0);
	return (is_prime_helper(n, div + 1));
}

