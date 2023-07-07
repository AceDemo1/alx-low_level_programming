section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    extern printf

global main
main:
    ; Save callee-saved registers
    push rbp
    mov rbp, rsp

    ; Pass the string address as the argument to printf
    mov rdi, format
    mov rsi, hello
    xor eax, eax  ; Clear EAX for variadic functions
    call printf

    ; Clean up the stack
    mov rsp, rbp
    pop rbp

    ; Exit the program
    mov eax, 0
    ret

