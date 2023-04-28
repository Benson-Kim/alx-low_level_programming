/**
 * print_message - Prints a message before the main function is executed.
 *
 * Description: This function is executed automatically before the main
 * function is called, and prints the message
 * "You're beat! and yet, you must allow,"
 * followed by "I bore my house upon my back!" on separate lines.
 *
 * Return: void
 */

#include <stdio.h>

void print_message(void) __attribute__ ((constructor));

void print_message(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

