#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 * asked by the user
 *
 * @c: Operator character
 *
 * Return: Pointer to the function that corresponds to the operator
 * given as a parameter, NULL if the operator is invalid
 */
int (*get_op_func(char c))(int, int)
{
	switch (c)
	{
		case '+':
			return (op_add);
		case '-':
			return (op_sub);
		case '*':
			return (op_mul);
		case '/':
			return (op_div);
		case '%':
			return (op_mod);
		default:
			return (NULL);
	}
}

