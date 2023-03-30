#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: the first number as a string
 * @n2: the second number as a string
 * @r: the buffer to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result, or 0 if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, sum;
	char *p;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i >= size_r || j >= size_r)
		return (0);
	p = r + size_r - 1, *p = '\0';
	for (i--, j--, k = 0, l = 0; i >= 0 || j >= 0 || k; i--, j--, l++)
	{
		m = i < 0 ? 0 : n1[i] - '0';
		n = j < 0 ? 0 : n2[j] - '0';
		sum = m + n + k;
		if (sum >= 10)
			k = 1, sum -= 10;
		else
			k = 0;
		if (l >= size_r)
			return (0);
		*--p = sum + '0';
	}
	if (*p == '\0')
		*--p = '0';
	return (p);
}

