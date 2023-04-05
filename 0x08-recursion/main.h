#ifndef MAIN_H
#define MAIN_H

/* _putchar - writes a character to stdout */
int _putchar(char c);

/* _puts_recursion - prints a string, followed by a new line */
void _puts_recursion(char *s);

/* _print_rev_recursion - prints a string in reverse */
void _print_rev_recursion(char *s);

/* _strlen_recursion - returns the length of a string */
int _strlen_recursion(char *s);

/* factorial - returns the factorial of a given number */
int factorial(int n);

/* _pow_recursion - returns the value of x raised to the power of y */
int _pow_recursion(int x, int y);

/* _sqrt_recursion - returns the natural square root of a number */
int _sqrt_recursion(int n);
int sqrt_helper(int n, int low, int high);

/* is_prime_number - checks whether a given number is prime */
int is_prime_number(int n);
int is_prime_helper(int n, int div);

#endif /* MAIN_H */

