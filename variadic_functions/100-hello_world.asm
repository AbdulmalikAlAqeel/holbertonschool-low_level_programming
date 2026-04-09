; File: 100-hello_world.asm
; Auth: Your Name
; Desc: A 64-bit assembly program that prints "Hello, World"

section .text
    global main

main:
    ; Optimization: setup syscall write(int fd, const void *buf, size_t count)
    mov rax, 1          ; system call number for sys_write (1)
    mov rdi, 1          ; file descriptor 1 is stdout
    mov rsi, message    ; address of the string to print
    mov rdx, 13         ; number of bytes to print (12 chars + newline)
    syscall             ; invoke the kernel

    ; Finalize: syscall exit(int status)
    mov rax, 60         ; system call number for sys_exit (60)
    xor rdi, rdi        ; status 0 (Success)
    syscall             ; invoke the kernel

section .data
    message db "Hello, World", 10 ; '10' is the ASCII code for newline (\n)
