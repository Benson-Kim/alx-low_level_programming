#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number and returns its value
 * @n: the number to get the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	/* get the last digit and make sure it's positive */
	last_digit = _abs(n % 10);

	/* print the last digit */
	_putchar(last_digit + '0');

	return (last_digit);
}

