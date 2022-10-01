global _ft_strcmp

section .text
  _ft_strcmp:
    mov rax, 0
    cmp rsi, rdi ; optimistically evaluate if strings[0] are eq.
    je terminate
  iter_over_args:
    mov al, [rdi] ; load lower 8bits from rdi
    mov bl, [rsi] ; load lower 8bits from rsi
    inc rdi ; increment *rdi pointer
    inc rsi ; increment *rsi pointer
    cmp al, bl ; compare and iterate until byte(`al != bl`)
    je iter_over_args
    cmp al, bl
    jge skip_and_substr ; if `bl >= al` skip next line
    sub rax, 256 ; else subtract 256 to rax
  skip_and_substr:
    sub al, bl
  terminate:
    ret
