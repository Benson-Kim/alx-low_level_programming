#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}

