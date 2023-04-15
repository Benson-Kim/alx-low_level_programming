#include "main.h"

/**
 * main - adds positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	/* Iterate through all arguments */
	for (i = 1; i < argc; i++)
	{
		/* Iterate through each character in the argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* Check if the character is a digit */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return 1;
			}
		}

		/* Convert the argument to an integer and add it to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return 0;
}

