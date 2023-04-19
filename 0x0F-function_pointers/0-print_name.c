#include "main.h"
/**
 * print_name - Prints a name
 *
 * @name: Name to be printed
 * @f: Pointer to a function that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
