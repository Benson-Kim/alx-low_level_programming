<h1>Variadic Functions</h1>

This repository contains C programs that demonstrate the use of variadic functions. Variadic functions are functions that take a variable number of arguments. In C, variadic functions are implemented using the stdarg.h header file and the macros defined in this header file.
Function Prototypes

The following is a list of function prototypes implemented in this repository:
## 1. sum_them_all
```c
int sum_them_all(const unsigned int n, ...)
```

This function takes in a variable number of integers and returns the sum of all the integers passed in. If no integers are passed in, it returns 0.

## 2. print_numbers
```c
void print_numbers(const char *separator, const unsigned int n, ...)
```

This function takes in a variable number of integers and prints them to the standard output, separated by the separator string parameter. If separator is NULL, it is not printed. The function also prints a new line at the end.

## 3. print_strings
```c
void print_strings(const char *separator, const unsigned int n, ...)
```

This function takes in a variable number of strings and prints them to the standard output, separated by the separator string parameter. If separator is NULL, it is not printed. If a string is NULL, it is printed as (nil). The function also prints a new line at the end.

## 4. print_all
```cvoid print_all(const char * const format, ...)
```

This function takes in a format string and a variable number of arguments. It prints the arguments to the standard output based on the format string. The format string consists of one or more of the following specifiers:

    c for char
    i for integer
    f for float
    s for string

If any other character is encountered in the format string, it is ignored. If a string argument is NULL, it is printed as (nil). The function also prints a new line at the end.
