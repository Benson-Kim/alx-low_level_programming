#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given integer and returns the value of the last digit
 *
 * @num: The integer whose last digit is to be printed
 *
 * Return: Value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit;

    /* Get the absolute value of num to handle negative numbers */
	if (num < 0)
		num = -num;

    /* Get the last digit of num */
	last_digit = num % 10;

    /* Print the last digit */
	_putchar(last_digit + '0');

    /* Return the value of the last digit */
	return last_digit;
}

