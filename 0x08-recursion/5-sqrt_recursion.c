#include "main.h"

/**
 * sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n
 *         -1 if n does not have a natural square root
 */
int sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_helper(n, 1, n));
}

/**
 * sqrt_helper - Recursive helper function for finding the natural square root of a number
 * @n: The number to find the square root of
 * @low: The lower bound of the square root
 * @high: The upper bound of the square root
 *
 * Return: The natural square root of n
 *         -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (sqrt_helper(n, low, mid - 1));
	else
		return (sqrt_helper(n, mid + 1, high));
}

