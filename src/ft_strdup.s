global _ft_strdup
extern _ft_strlen, _ft_strcpy
extern _malloc

; strdup(char *src);
section .text
  _ft_strdup:
    ; get len of rdi
    call _ft_strlen
    push rdi
    ; store src reference in stack
    mov rdi, rax
    inc rdi
    ; mov rax to rdi & increment for NULL End
    call _malloc
    ; store back source string(%rdi) reference
    pop rsi
    ; move allocated str into rdi
    mov rdi, rax
    call _ft_strcpy
    ret
