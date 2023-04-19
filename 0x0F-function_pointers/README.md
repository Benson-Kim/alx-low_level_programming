<h1>0x0F. C - Function pointers</h1>

This repository contains examples of C functions for various tasks. The functions are written in compliance with the Betty style and betty documentation, and follow certain requirements such as no use of global variables and a maximum of 5 functions per file. The functions also only use malloc, free, and exit from the standard C library, and implement their own versions of other common functions.

# Functions
## print_name
This function takes a name and a function pointer as parameters, and uses the function pointer to print the name in a certain way. The function pointer should take a char * as a parameter and return void.

```c
void print_name(char *name, void (*f)(char *));
```

array_iterator
This function takes an array, the size of the array, and a function pointer as parameters. It uses the function pointer to perform an action on each element of the array. The function pointer should take an int as a parameter and return void.

c
Copy code
void array_iterator(int *array, size_t size, void (*action)(int));
int_index
This function takes an array, the size of the array, and a function pointer as parameters. It uses the function pointer to compare values in the array, and returns the index of the first element for which the function pointer does not return 0. If no element matches, it returns -1. If size <= 0, it also returns -1.

c
Copy code
int int_index(int *array, int size, int (*cmp)(int));
get_op_func
This function takes an operator as a parameter and returns a function pointer that performs the corresponding operation on two integers. If the operator is invalid, it returns NULL.

c
Copy code
int (*get_op_func(char c))(int, int);
Helper Functions
The following helper functions are also provided for use with the above functions:

_putchar
This function takes a character as a parameter and writes it to the standard output.

c
Copy code
void _putchar(char c);
_strlen
This function takes a string as a parameter and returns its length.

c
Copy code
int _strlen(char *s);
_puts
This function takes a string as a parameter and writes it to the standard output, followed by a newline character.

c
Copy code
void _puts(char *s);
_isdigit
This function takes an integer as a parameter and returns 1 if it is a digit, and 0 otherwise.

c
Copy code
int _isdigit(int c);
_atoi
This function takes a string as a parameter and converts it to an integer.

c
Copy code
int _atoi(char *s);
Usage
Each function has its own set of usage instructions, which can be found in the respective function's description above. Additionally, each function has its own set of files that must be compiled together for proper usage.
