global _ft_read
extern ___error

; @see https://opensource.apple.com/source/xnu/xnu-2782.20.48/bsd/kern/syscalls.master
READ equ 0x2000003

section .text
  _ft_read:
    mov rax, READ
    ; invoke read()
    syscall
    ; terminate if no carry flag
    jnc terminate
    ; save `errno` before calling ___error
    mov rbx, rax
    call ___error
    ; get errno global variable pointer and store it in rax.
    ; @see https://github.com/cacharle/libasm_test/issues/2#issuecomment-622371402
    mov [rax], rbx
    ; set pointer value for errno to be `syscall` return value from READ
    mov rax, -1
    ; return error status code as expected for read implementation
  terminate:
    ret
