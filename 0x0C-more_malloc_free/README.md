<h1>0x0C. C - More malloc, free </h1>

# String Functions
## _putchar
```c
int _putchar(char c);
```
Prints a character to standard output.

## _strdup
```c
char *_strdup(char *str);
```
Duplicates a string and returns a pointer to the newly allocated memory.

## create_array
```c
char *create_array(unsigned int size, char c);
```
Creates an array of chars of a specified size and initializes each element with a specific char.

## str_concat
```c
char *str_concat(char *s1, char *s2);
```
Concatenates two strings and returns a pointer to the newly allocated memory.

## strtow
```c
char **strtow(char *str);
```
Splits a string into words and returns an array of strings.

# Memory Functions
## _realloc
```c
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
```
Reallocates a block of memory to a new size.

## _calloc
```c
void *_calloc(unsigned int nmemb, unsigned int size);
```
Allocates memory for an array of elements and sets them to zero.

## malloc_checked
```c
void *malloc_checked(unsigned int b);
```
Allocates memory and exits with a status code of 98 if allocation fails.

## _memset
```c
void *_memset(void *s, int c, unsigned int n);
```
Sets the first n bytes of the memory pointed to by s to the specified value.

## _memcpy
```c
void *_memcpy(void *dest, const void *src, unsigned int n);
```
Copies n bytes from memory area src to memory area dest.

# Math Functions
## _abs
```c
int _abs(int n);
```
Computes the absolute value of an integer.

## _isdigit
```c
int _isdigit(int c);
```
Checks whether a character is a digit.

## _atoi
```c
int _atoi(char *s);
```
Converts a string to an integer.

# 2D Grid Functions
## alloc_grid
```c
int **alloc_grid(int width, int height);
```
Allocates memory for a 2D grid of integers and initializes each element to zero.

## free_grid
```c
void free_grid(int **grid, int height);
```
Frees the memory allocated for a 2D grid of integers.

# Miscellaneous Functions
## argstostr
```c
char *argstostr(int ac, char **av);
```
Concatenates all the arguments passed to the program and returns a pointer to the newly allocated memory.
