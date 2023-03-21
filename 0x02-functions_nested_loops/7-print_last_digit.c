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
	long long abs_num = num

    /* Get the absolute value of num to handle negative numbers */
	if (abs_num < 0)
		abs_num = -abs_num;

    /* Get the last digit of num */
	last_digit = abs_num % 10;

    /* Print the last digit */
	_putchar(last_digit + '0');

    /* Return the value of the last digit */
	return (last_digit);
}

