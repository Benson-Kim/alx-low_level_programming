# Linked List Functions

## Print Elements in a Linked List
```c
size_t print_listint(const listint_t *h);
```
This function prints all the elements of a linked list. It takes in a pointer to the head of the linked list as an argument and iterates through the list to print each element using printf(). It returns the number of nodes in the list as a size_t


## Get the Number of Elements in a Linked List
```c
size_t listint_len(const listint_t *h);
```
This function returns the number of nodes in a linked list. It takes in a pointer to the head of the linked list as an argument and iterates through the list to count the number of nodes. It returns the count as a size_t.


## Add a New Node at the Beginning of a Linked List
```c
listint_t *add_nodeint(listint_t **head, const int n);
```
This function adds a new node of type listint_t to the beginning of a list. It takes a double pointer to the head of the list as input and an integer n. The function allocates memory for a new node, assigns the value n to the n member of the node, and adds the new node to the beginning of the list.

## Add a New Node at the End of a Linked List
```c
listint_t *add_nodeint_end(listint_t **head, const int n);
```
This function adds a new node of type listint_t to the end of a list. It takes a double pointer to the head of the list as input and an integer n. The function allocates memory for a new node, assigns the value n to the n member of the node, and adds the new node to the end of the list.

## Free a list
```c
void free_listint2(listint_t **head);
```
This function frees a list of type listint_t. It takes a double pointer to the head of the list as input. The function iterates through the list and frees each node. Finally, it sets the head pointer to NULL.

## Delete the First Node of a Linked List
```c
int pop_listint(listint_t **head);
```
a function that deletes the head node of a singly linked list and returns its data (integer value). If the list is empty, it returns 0. The head pointer is updated to point to the next node after the deleted node.

## Get the nth Node of a Linked List
```c
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
```
a function that returns the node at the specified index in a singly linked list. The index starts at 0. If the node does not exist, it returns NULL.

## Sum all the Data in a Linked List
```c
int sum_listint(listint_t *head);
```
a function that calculates and returns the sum of all the data (integer values) in a singly linked list.

## Insert a New Node at a Given Position in a Linked List
```c
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
```
a function that inserts a new node with a given value at a specified index in a singly linked list of integers. It takes a double pointer to the head of the list, an unsigned integer index, and an integer value as its parameters, and returns a pointer to the newly added node if the insertion was successful, NULL otherwise.

## Delete a Node at a Given Position in a Linked List
```c
int delete_nodeint_at_index(listint_t **head, unsigned int index);
```
a function that deletes a node at a given index in a singly linked list of integers. It takes a double pointer to the head of the list and an unsigned integer index as its parameters, and returns 1 if the deletion was successful, -1 otherwise.

## Reverse a Linked List: reverse_listint
```c
listint_t *reverse_listint(listint_t **head);
```
a function that reverses a singly linked list of integers. It takes a double pointer to the head of the list as its parameter and returns a pointer to the first node of the reversed list.

## Print Elements in a Linked List Safely
```c
size_t print_listint_safe(const listint_t *head);
```
a function that prints a linked list safely. It takes a pointer to the head of the list and goes through the list only once to print all the nodes. It returns the number of nodes that were printed. This function can print lists with a loop, and if it fails to print the list, it exits the program with status 98.

## Free a Linked List Safely
```c
size_t free_listint_safe(listint_t **h);
```
a function that frees a linked list safely. It takes a double pointer to the head of the list and goes through the list only once to free all the nodes. It returns the number of nodes that were freed and sets the head to NULL.

## Find a Loop in a Linked List
```c
listint_t *find_listint_loop(listint_t *head);
```
This function is useful in detecting if there is a loop in a linked list, which can cause infinite loops and other issues in linked list operations. The algorithm to detect the loop uses a "slow" and "fast" pointer approach, where the "slow" pointer moves one node at a time and the "fast" pointer moves two nodes at a time. If there is a loop in the list, the two pointers will eventually meet at a node inside the loop.
