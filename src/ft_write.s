global _ft_write
extern ___error

; @see https://opensource.apple.com/source/xnu/xnu-2782.20.48/bsd/kern/syscalls.master
WRITE equ 0x2000004

; write(int fd, void *buff, size_t limit);
section .text
  _ft_write:
    mov rax, WRITE
    syscall
    jnc terminate
    push rax
    call ___error
    pop rbx
    mov [rax], rbx
    mov rax, -1
  terminate:
    ret
