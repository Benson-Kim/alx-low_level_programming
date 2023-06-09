#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);

/* 0. Great leaders are willing to sacrifice their own personal interests for the good of the team */
char *_strcat(char *dest, char *src);

/* 1. Don't hate the hacker, hate the code */
char *_strncat(char *dest, char *src, int n);

/* 2. Always half-full */
char *_strncpy(char *dest, char *src, int n);

/* 3. Winning is only half of it. Having fun is the other half */
int _strcmp(char *s1, char *s2);

/* 4. It's not bragging if you can back it up */
void reverse_array(int *a, int n);

/* 5. The shortest distance between two points is a straight line */
char *string_toupper(char *);

/* 6. I feel like I am diagonally parked in a parallel universe */
char *cap_string(char *);

/* 7. You are a slave to the code, let it control you or be free */
char *leet(char *);

/* 8. rot13 */
char *rot13(char *);

/* 9. Numbers have life; they're not just symbols on paper */
void print_number(int n);

/*11. It is the addition of strangeness to beauty that constitutes the romantic character in art */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/*12. Noise is a buffer, more effective than cubicles or booth walls */
void print_buffer(char *b, int size);

#endif /* MAIN_H */
