<h1>0x0C. C - More malloc, free </h1>

# String Functions
_putchar
java
Copy code
int _putchar(char c);
Prints a character to standard output.

_strdup
rust
Copy code
char *_strdup(char *str);
Duplicates a string and returns a pointer to the newly allocated memory.

create_array
arduino
Copy code
char *create_array(unsigned int size, char c);
Creates an array of chars of a specified size and initializes each element with a specific char.

str_concat
arduino
Copy code
char *str_concat(char *s1, char *s2);
Concatenates two strings and returns a pointer to the newly allocated memory.

strtow
arduino
Copy code
char **strtow(char *str);
Splits a string into words and returns an array of strings.

# Memory Functions
_realloc
arduino
Copy code
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
Reallocates a block of memory to a new size.

_calloc
arduino
Copy code
void *_calloc(unsigned int nmemb, unsigned int size);
Allocates memory for an array of elements and sets them to zero.

malloc_checked
arduino
Copy code
void *malloc_checked(unsigned int b);
Allocates memory and exits with a status code of 98 if allocation fails.

_memset
arduino
Copy code
void *_memset(void *s, int c, unsigned int n);
Sets the first n bytes of the memory pointed to by s to the specified value.

_memcpy
arduino
Copy code
void *_memcpy(void *dest, const void *src, unsigned int n);
Copies n bytes from memory area src to memory area dest.

# Math Functions
_abs
java
Copy code
int _abs(int n);
Computes the absolute value of an integer.

_isdigit
java
Copy code
int _isdigit(int c);
Checks whether a character is a digit.

_atoi
java
Copy code
int _atoi(char *s);
Converts a string to an integer.

# 2D Grid Functions
alloc_grid
arduino
Copy code
int **alloc_grid(int width, int height);
Allocates memory for a 2D grid of integers and initializes each element to zero.

free_grid
arduino
Copy code
void free_grid(int **grid, int height);
Frees the memory allocated for a 2D grid of integers.

# Miscellaneous Functions
argstostr
arduino
Copy code
char *argstostr(int ac, char **av);
Concatenates all the arguments passed to the program and returns a pointer to the newly allocated memory.
