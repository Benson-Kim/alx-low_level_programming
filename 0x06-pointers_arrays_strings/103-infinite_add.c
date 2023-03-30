#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if result can't be stored in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i, j, sum, carry = 0;

	/* Determine the length of the strings */
	for (len1 = 0; n1[len1]; len1++)
		;
	for (len2 = 0; n2[len2]; len2++)
		;

	/* Check if the result can be stored in the buffer */
	if (size_r <= len1 || size_r <= len2)
		return (0);

	/* Add the digits and store the result in the buffer */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[len1 - i - 1 + (len2 - j - 1)] = (sum % 10) + '0';
	}

	/* Reverse the string in the buffer */
	for (i = 0, j = len1 + len2 - 2; i < j; i++, j--)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}

	/* Add the null terminator and return the pointer to the result */
	r[len1 + len2 - 1] = '\0';
	return (r);
}

