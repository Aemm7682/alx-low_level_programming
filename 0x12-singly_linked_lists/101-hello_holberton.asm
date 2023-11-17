section .data
    hello db 'Hello, Holberton', 10, 0

section .text
    global main
    extern printf

main:
    ; Prepare the arguments for printf
    mov rdi, hello
    xor rax, rax

    ; Call printf
    call printf

    ; Return from main
    mov eax, 0x60
    xor edi, edi
    syscall
