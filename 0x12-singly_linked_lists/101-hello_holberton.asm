section .data
    hello db "Hello, Holberton", 10, 0

section .text
    global main

    extern printf

main:
    ; Push the address of the string to the stack
    push hello

    ; Call printf with the format string and pop the argument from the stack
    mov rdi, hello
    xor eax, eax
    call printf
    add rsp, 8  ; pop the argument from the stack

    ; Return from the main function
    xor eax, eax
    ret

