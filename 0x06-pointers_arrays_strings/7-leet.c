#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: String to be encoded.
 *
 * Return: Pointer to the resulting string.
 */
char *leet(char *str)
{
	char *p = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_codes = "4433007711";

	/* Iterate over each character of the string */
	while (*p)
	{
		int i;

		for (i = 0; leet_chars[i]; i++)
		{
			if (*p == leet_chars[i])
				*p = leet_codes[i];
		}

		p++; /* Move to the next character */
	}

	return (str);
}
