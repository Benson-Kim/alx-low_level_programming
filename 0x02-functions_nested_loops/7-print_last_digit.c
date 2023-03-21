#include "main.h"

/**
 * print_last_digit 
 * @num: The integer whose last digit is to be printed
 *
 * Return: Value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

    /* Print the last digit */
	_putchar(last_digit + '0');

    /* Return the value of the last digit */
	return (last_digit);
}

