global _ft_strcpy

section .text
  _ft_strcpy:
    mov rax, -1
  copycat:
    inc rax
    mov rcx, [rsi]
    mov [rdi], rcx
    ; we cannot byte copy like this:
    ; `mov [rdi], [rsi]`
    ; thus we store [rsi] in rcx per iteration
    inc rdi
    inc rsi
    cmp byte [rsi], 0
    jne copycat
    ; loop until end of source string
    ret
