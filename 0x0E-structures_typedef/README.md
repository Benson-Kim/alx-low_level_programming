<h1> 0x0E. C - Structures, typedef </h1>

Dog Structure Definition

The dog_t structure is defined in the dog.h header file as follows:

```c
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;
```

This structure represents a dog with a name string, an age float, and an owner string.
Function Documentation
init_dog

```c
void init_dog(dog_t *d, char *name, float age, char *owner);
```

This function initializes a dog_t instance pointed to by d with the given name, age, and owner values.
print_dog

```c
void print_dog(dog_t *d);
```

This function prints the name, age, and owner values of the dog_t instance pointed to by d. If any of these values are NULL, it prints (nil) instead.
new_dog

```c
dog_t *new_dog(char *name, float age, char *owner);
```
This function creates a new instance of dog_t with the given name, age, and owner values. It allocates memory for the dog_t instance and the name and owner strings, and copies the strings. If any of the memory allocations fail, it returns NULL.
free_dog

```c
void free_dog(dog_t *d);
```

This function frees the memory allocated for a dog_t instance, including the name and owner strings.
Usage

To use the dog structure and functions in your own code, you should include the dog.h header file in your source files:
```c
#include "dog.h"
```
