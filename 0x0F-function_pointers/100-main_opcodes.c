#include "main.h"
#include <stdio.o>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on wrong number of arguments, 2 on negative number of bytes
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *addr = (char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", addr[i]);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
