; hello.asm
; 64-bit program in assembly that prints "Hello, Holberton" followed by a new line

        global  main
        extern  printf

        section .data
msg:    db      'Hello, Holberton', 0

        section .text
main:
        ; prepare arguments for printf
        mov     rdi, msg            ; format string
        xor     rax, rax            ; no floating-point arguments

        ; call printf
        call    printf

        ; exit with status 0
        xor     rax, rax
        ret
