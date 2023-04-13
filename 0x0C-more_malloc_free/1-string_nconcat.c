#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: String 1 to be concatenated
 * @s2: String 2 to be concatenated
 * @n: Number of bytes from s2 to be concatenated
 *
 * Return: Pointer to the concatenated string
 *		 NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	if (n >= strlen(s2))
		len_s2 = strlen(s2);
	else
		len_s2 = n;

	concat_str = malloc(len_s1 + len_s2 + 1);
	if (concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);
	strncat(concat_str, s2, len_s2);

	return (concat_str);
}

