global _ft_read
extern ___error

; @see https://opensource.apple.com/source/xnu/xnu-2782.20.48/bsd/kern/syscalls.master
READ equ 0x2000003

; read(%rdi, %rsi, %rdx)
; - %rdi File Descriptor to fetch data from
; - %rsi Writable buffer. Destination
; - %rdx N bytes to read from %rdi
section .text
  _ft_read:
    mov rax, READ
    ; invoke read()
    syscall
    jnc terminate ; terminate if no carry flag
    call ___error
    mov rax, -1; if a flag is set we update return val to be -1
  terminate:
    ret
