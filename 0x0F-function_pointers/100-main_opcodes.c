#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of command line arguments
 * @argv: an array of command line argument strings
 *
 * Return: 0 on success, 1 if number of arguments is incorrect,
 *		 2 if the number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	/* Print the opcodes of main function */
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i != num_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return 0;
}

