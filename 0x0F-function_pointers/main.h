#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* function prototypes */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char c))(int, int);

/* helper function prototypes */
void _putchar(char c);
int _strlen(char *s);
void _puts(char *s);
int _isdigit(int c);
int _atoi(char *s);

#endif /* MAIN_H */

