global _ft_strlen

section .text

_ft_strlen:
	mov	rax, 0x2000004 ; syscall number for write
	mov	rdi, 1 ; stdout
	mov	rsi, hola
	mov	rdx, 13 ; char count
	syscall

	mov	rax, 0x2000001 ; syscall number for exit
	mov	rdi, 0 ; stdin
	syscall

section .data

hola: db "Hello, world!"