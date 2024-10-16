# Assembly
Implement hello world in the assembly language
# Dependencies
## nasm
To install nasm use ```sudo apt install nasm``` on your linux terminal
## ld
ld does not need to be installed as it is built into linux.
# Compilation and linking
Run the command ```nasm -f elf32 hello.asm -o hello.o && ld -m elf_i386 hell0.o -o hello```.
# Usage
cd into downloaded folder then run the command ```./hello```
