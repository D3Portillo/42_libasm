global _ft_strcmp

section .text
  _ft_strcmp:
    mov rax, 0
    cmp rsi, rdi
    ; optimistically evaluate if strings[0] are equal
    je terminate
  iter_over_args:
    ; byte load from rdi, rsi to 8-bit registers
    mov al, [rdi]
    mov bl, [rsi]
    ; increment *rdi, *rsi pointers
    inc rdi
    inc rsi
    cmp al, bl
    ; compare and iterate until `al != bl`
    je iter_over_args
    ja skip_and_substr
    ; if `bl >= al` skip next line
    ; else subtract 256 to rax
    sub rax, 256
  skip_and_substr:
    sub al, bl
  terminate:
    ret
