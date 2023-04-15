#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return (0);
}

/**
 * print_arguments - Prints all the command-line arguments
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 */
void print_arguments(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i])
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
		_putchar('\n');
	}
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (putchar(c));
}

