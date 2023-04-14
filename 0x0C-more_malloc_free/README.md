<h1>0x0C. C - More malloc, free </h1>

This is a collection of memory allocation functions implemented in C.

<h3>Functions</h3>

<h5>void *malloc_checked(unsigned int b)</h5>
This function allocates memory using <bold>malloc</bold>. It returns a pointer to the allocated memory. If <bold>malloc</bold> fails, the malloc_checked function will cause normal process termination with a status value of 98.

<h5>char *string_nconcat(char *s1, char *s2, unsigned int n)</h5>
This function concatenates two strings. The returned pointer points to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated. If the function fails, it returns NULL. If n is greater or equal to the length of s2, then the entire string s2 is used. If NULL is passed, it is treated as an empty string.

<h5>void *_calloc(unsigned int nmemb, unsigned int size)</h5>
This function allocates memory for an array using malloc. It allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then _calloc returns NULL. If malloc fails, then _calloc returns NULL.

<h5>int *array_range(int min, int max)</h5>
This function creates an array of integers containing all values from min to max, ordered from smallest to largest. Returns a pointer to the newly created array, or NULL if min > max or memory allocation fails.

<h5>void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)</h5>
This function reallocates a memory block previously allocated with malloc to a new size using malloc and free. Copies the contents of the old memory block to the new block, up to the minimum of the old and new sizes. Returns a pointer to the newly allocated memory block, or NULL on failure. If new_size is 0 and ptr is not NULL, frees the memory associated with ptr and returns NULL. If ptr is NULL, calls malloc with the new size and returns a pointer to the newly allocated memory. If new_size is equal to old_size, simply returns ptr.

<h3>Usage</h3>
To use these functions, include the ***main.h*** header file in your C source files that use these functions.
