section .text
  global _start

_start:
  mov ebx, 1
  mov eax, 4
  mov edx, 13
  mov ecx, message
  int 0x80

  mov ebx, 0
  mov eax, 1
  int 0x80

message:
  db "hello, world", 10, 0
