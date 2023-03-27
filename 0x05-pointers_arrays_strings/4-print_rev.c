/**
 * print_rev - Prints a string in reverse order, followed by a new line.
 *
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int i, j, len;

	/* Find the length of the string */
	for (len = 0; s[len] != '\0'; len++)
		;

	/* Print the string in reverse order */
	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		putchar(s[i]);
	}

	/* Print a new line character */
	putchar('\n');
}

