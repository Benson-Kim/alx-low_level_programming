#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/* string functions */
int _putchar(char c);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
char **strtow(char *str);

/* memory functions */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);
void *_memset(void *s, int c, unsigned int n);
void *_memcpy(void *dest, const void *src, unsigned int n);

/* math functions */
int _abs(int n);
int _isdigit(int c);
int _atoi(char *s);

/* 2D grid functions */
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

/* argstostr function */
char *argstostr(int ac, char **av);

#endif /* MAIN_H */

