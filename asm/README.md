# Assembly
Implement hello world in the assembly language
# Dependencies
## nasm
To install nasm use ```sudo apt install nasm``` on your linux terminal. for more visit the [nasm page](https://www.nasm.us/)
## ld
ld does not need to be installed as it is built into linux.
# Compilation and linking
Run the command ```nasm -f elf32 hello.asm -o hello.o``` then the command ```ld -m elf_i386 hell0.o -o hello```. this will compile the assembly into an object file then link it into an executable.
# Usage
cd into downloaded folder then run the command ```./hello```
