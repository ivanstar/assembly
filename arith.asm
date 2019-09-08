;This is an X86 program  (; ->comment out)

;Assemble: nasm -f elf64 -l disc.lis -o disc.o disc.asm


Global disc

Segment .data
;empty

segment .bss
;empty

segment .text
Disc:
push rbp
mov rbp, rsp
push rbx
push rcx
push rdx
push rdi
push rsi
push r8
push r9
push r10
push r11
push r12
push r13
push r14
push r15

mov r13, rdi 	;a=r13
mov r14, rdi	;b=r14
mov r15, rdx	;c=r15

imul r14,r14	;r14=b^2
mov r14, 4
imul r12,r13	;r12=4*a
imul r12,r15	;r12=4*a*c
sub r14,r12

mov rax,r14


pop r15
pop r14
pop r13
pop r12
pop r11
pop r10
pop r9
pop r8
pop rsi
pop rdi
pop rdx
pop rcx
pop rbx
pop rbp

Ret
