#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		putchar(str[i]);


		if (str[i + 1] == '\0')
			break;
	}

	putchar('\n');
}
