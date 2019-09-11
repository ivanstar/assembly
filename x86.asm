;This is an X86 program  (; ->comment out)

;Assemble: nasm -f elf64 -l disc.lis -o disc.o disc.asm

;long discriminant(long,long,long);

segment .data
greet1 db "Welcome to the arithmetic program by Ivan Tu.",10

segment .bss
;empty

segment .text
  global _start


_start:
  mov rax, 1
  mov rdi, 1
  mov rsi, greet1
  mov rdx, 14
  syscall

  mov rax, 60
  mov rdi, 0
  syscall
