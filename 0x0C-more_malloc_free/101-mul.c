#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: a pointer to the result, or NULL if an error occurs
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, k, carry, sum;
	char *result;

	if (!num1 || !num2 || !*num1 || !*num2)
		return (NULL);

	result = malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[i] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		if (!_isdigit(num1[i]))
		        return (NULL);
		carry = 0;
		for (j = len2 - 1, k = i + j + 1; j >= 0; j--, k--)
		{
		        if (!_isdigit(num2[j]))
		                return (NULL);
		        sum = (num1[i] - '0') * (num2[j] - '0') + (result[k] - '0') + carry;
		        carry = sum / 10;
		        result[k] = (sum % 10) + '0';
		}
		result[k] = carry + '0';
	}

	while (*result == '0' && *(result + 1))
		result++;

	return (result);
}

/**
 * main - multiplies two positive numbers passed as arguments
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if successful, 98 if an error occurs
 */
int main(int argc, char **argv)
{
	char *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!*argv[1] || !*argv[2])
	{
		printf("Error\n");
		return (98);
	}

	result = mul(argv[1], argv[2]);

	if (!result)
	{
		printf("Error\n");
		return (98);
	}

	printf("%s\n", result);
	free(result);
	return (0);
}

