<h1>0x0C. C - More malloc, free </h1>

This is a collection of memory allocation functions implemented in C.

Functions
void *malloc_checked(unsigned int b)
This function allocates memory using malloc. It returns a pointer to the allocated memory. If malloc fails, the malloc_checked function will cause normal process termination with a status value of 98.

char *string_nconcat(char *s1, char *s2, unsigned int n)
This function concatenates two strings. The returned pointer points to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated. If the function fails, it returns NULL. If n is greater or equal to the length of s2, then the entire string s2 is used. If NULL is passed, it is treated as an empty string.

void *_calloc(unsigned int nmemb, unsigned int size)
This function allocates memory for an array using malloc. It allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then _calloc returns NULL. If malloc fails, then _calloc returns NULL.
