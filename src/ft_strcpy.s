global _ft_strcpy

; strcpy(char *dst, char *src)
section .text
  _ft_strcpy:
    mov rax, 0
  copycat:
    mov rcx, [rsi + rax]
    mov [rdi + rax], rcx
    ; copy over rsi to rdi
    cmp byte [rsi + rax], 0
    je terminate
    ; terminate until source(%rsi) end
    inc rax
    jmp copycat
    ; loop unil str end
  terminate:
    mov rax, rdi
    ; set return to be dst
    ret
