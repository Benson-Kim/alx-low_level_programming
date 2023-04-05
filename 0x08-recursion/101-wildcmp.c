#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they can be considered identical, otherwise 0
 * @s1: The first string to compare
 * @s2: The second string to compare (can contain * wildcard character)
 *
 * Return: 1 if s1 and s2 can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If s2 starts with *, recursively check s1 against s2 with * removed */
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0') /* If * is the last character in s2, s1 and s2 are identical */
			return (1);
		else if (*s1 == '\0') /* If s1 is empty and * is not the last character in s2, they are not identical */
			return (0);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)); /* Check s1 against s2 with * removed and check s1 with * as a placeholder */
	}

	/* If the current characters match, recursively check the next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0); /* If none of the above cases apply, s1 and s2 are not identical */
}

