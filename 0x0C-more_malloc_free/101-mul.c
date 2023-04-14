#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (*s++)
	    len++;

	return (len);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number
 * @num2: the second number
 *
 * Return: a pointer to the result, or NULL on failure
 */
char *mul(const char *num1, const char *num2)
{
	size_t len1, len2, len_res, i, j;
	int *res, carry;

	if (!num1 || !num2 || !_isdigit(*num1) || !_isdigit(*num2))
	    return (NULL);

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len_res = len1 + len2;
	res = calloc(len_res, sizeof(int));
	if (!res)
	    return (NULL);

	for (i = len1; i--;)
	{
	    if (!_isdigit(num1[i]))
	        goto error;

	    carry = 0;
	    for (j = len2; j--;)
	    {
	        if (!_isdigit(num2[j]))
	            goto error;

	        res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0') + carry;
	        carry = res[i + j + 1] / 10;
	        res[i + j + 1] %= 10;
	    }
	    res[i] += carry;
	}

	while (*res == 0 && len_res > 1)
	{
	    res++;
	    len_res--;
	}

	return ((char *)res);

error:
	free(res);
	return (NULL);
}

/**
 * main - multiplies two positive numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 if successful, 98 if there is an error
 */
int main(int argc, char **argv)
{
	char *res;

	if (argc != 3)
	{
	    printf("Error\n");
	    return (98);
	}

	res = mul(argv[1], argv[2]);
	if (!res)
	{
	    printf("Error\n");
	    return (98);
	}

	printf("%s\n", res);
	free(res);

	return (0);
}
