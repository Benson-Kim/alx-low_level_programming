#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number whose square root is to be found
 *
 * Return: Natural square root of n
 *         -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt_helper(n, 1, n));
}

/**
 * _sqrt_helper - Recursive helper function for calculating square root
 * @n: The number whose square root is to be found
 * @low: The lower bound of the range of possible square roots
 * @high: The upper bound of the range of possible square roots
 *
 * Return: Natural square root of n within the range [low, high]
 *         -1 if n does not have a natural square root within the range [low, high]
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;
	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (_sqrt_helper(n, low, mid - 1));
	else
		return (_sqrt_helper(n, mid + 1, high));
}

