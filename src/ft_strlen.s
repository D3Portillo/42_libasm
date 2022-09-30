global _ft_strlen

section .text
  _ft_strlen:
    mov rax, -1
    ; init register to be -1
  compare_and_count:
    inc rax
    ; increment, rax + 1
    ; first iteration becomez Zero
    cmp byte [rdi + rax], 0
    ; byte compare first argument of string from it´s
    ; zero-th pointer to rax-index.
    jne compare_and_count
    ; if `cmp` result is Not equal `0` jump to `compare_and_count`
    ret
    ; return rax
