section .data
    hello db 'Hello, Holberton', 0

section .text
    extern printf
    global main

main:
    ; Prepare arguments for printf
    mov rdi, hello     ; format
    xor rax, rax       ; clear rax to set up for variadic function

    ; Call printf
    call printf

    ; Return from main
    mov eax, 0x60      ; syscall number (sys_exit)
    xor edi, edi       ; exit code
    syscall            ; call kernel
