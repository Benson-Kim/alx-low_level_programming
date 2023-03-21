#ifndef MAIN_H
#define MAIN_H
#include "main.h"

int _islower(int c);
int _putchar(char c);

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}

#endif /* MAIN_H */
