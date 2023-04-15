#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	print_program_name(argv);
	return (0);
}

/**
 * print_program_name - Prints the name of the program
 * @argv: An array containing the command line arguments
 */
void print_program_name(char *argv[])
{
	int i;

	i = 0;
	while (argv[0][i] != '\0')
	{
	    _putchar(argv[0][i]);
	    i++;
	}
	_putchar('\n');
}

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

