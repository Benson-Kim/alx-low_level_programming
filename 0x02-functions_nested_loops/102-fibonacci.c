#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
	int count;
	long int first = 1, second = 2, next;

	printf("%lu, ", first);
	printf("%lu, ", second);

	next = first + second;

	for (count = 3; count <= 50; count++)
	{
		if (count == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
