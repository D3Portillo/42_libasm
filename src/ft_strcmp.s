global _ft_strcmp

; strcmp(char *s1, char *s2)
section .text
  _ft_strcmp:
    mov rax, 0
    cmp rsi, rdi
    je terminate
    ; optimistically evaluate if strings[0] are equal
  iter_over_args:
    ; byte load from rdi, rsi to 8-bit registers
    mov al, [rdi]
    mov cl, [rsi]
    ; increment *rdi, *rsi pointers
    inc rdi
    inc rsi
    cmp al, cl
    ; compare and iterate until `al != cl`
    je iter_over_args
    ja subtract_registers
    ; if `cl >= al` skip next line
    sub rax, 256
  subtract_registers:
    sub al, bl
  terminate:
    ret
