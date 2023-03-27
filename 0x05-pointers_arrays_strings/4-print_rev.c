#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int i;

	/* Determine the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* Print the characters in reverse order */
	for (i--; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
