#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - Recursive helper function 
 * for checking if a string is a palindrome
 * @s: The string to check
 * @start: The starting index of the substring to check
 * @end: The ending index of the substring to check
 *
 * Return: 1 if the substring from start to end is a palindrome, 0 if not
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to find the length of
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (_strlen_recursion(s + 1) + 1);
}

