global _start

section .data
msg db "hello, world", 0x0a ; set msg variable to the byte value of "hello, world". 0x0a defines a newline.
len equ $ -msg ; set the len variable to the length of msg


section .text
_start:

mov eax, 4 ; syscall SYS_WRITE
mov ebx, 1 ; write to stdout aka terminal
mov ecx, msg ; write the msg variable
mov edx, len ; defines how many bytes to write using the len variable
int 0x80 ; software interrupt to run our syscall

mov eax, 1 ; syscall SYS_EXIT
mov ebx, 0 ; exit code 0
int 0x80 ; software interrupt to run our syscall
