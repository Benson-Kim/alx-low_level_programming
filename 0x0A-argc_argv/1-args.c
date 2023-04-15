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
	int count = count_arguments(argc);
	printf("%d\n", count);
	return (0);
}

/**
 * count_arguments - Counts the number of command-line arguments
 * @argc: The number of command-line arguments
 *
 * Return: The number of command-line arguments
 */
int count_arguments(int argc)
{
	return (argc - 1);
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

