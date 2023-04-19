#ifndef CALC_H
#define CALC_H

/* Standard Library Headers */
#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes */
int (*get_op_func(char c))(int, int);
int _putchar(char c);
void print_error_and_exit(int error_code);

#endif /* CALC_H */

