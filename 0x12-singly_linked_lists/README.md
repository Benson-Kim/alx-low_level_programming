# 0x12. C - Singly linked lists

This project is focused on learning how to use and manipulate singly linked lists in C. The project consists of a series of functions prototypes and programs that demonstrate the different ways in which linked lists can be implemented and manipulated.

## Function Prototypes

The following function prototypes are included in this project:
### 0-print_list.c

```c
size_t print_list(const list_t *h);
```

This function prints all the elements of a list_t list. It returns the number of nodes in the list.
### 1-list_len.c

```c
size_t list_len(const list_t *h);
```

This function returns the number of elements in a list_t list.
### 2-add_node.c

```c
list_t *add_node(list_t **head, const char *str);
```

This function adds a new node at the beginning of a list_t list. It takes a string as an argument and returns the address of the new element.
### 3-add_node_end.c

```c
list_t *add_node_end(list_t **head, const char *str);
```

This function adds a new node at the end of a list_t list. It takes a string as an argument and returns the address of the new element.
### 4-free_list.c

```c
void free_list(list_t *head);
```

This function frees a list_t list.
## Programs

The following programs are included in this project:
### 0-main.c

This program tests the print_list function.
### 1-main.c

This program tests the list_len function.
### 2-main.c

This program tests the add_node function.
### 3-main.c

This program tests the add_node_end function.
### 4-main.c

This program tests the free_list function.
