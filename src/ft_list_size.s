global _ft_list_size

; struct { data: *void, next: *void }
NEXT_NODE equ 8

; ft_list_size(t_list *genesis);
section .text
  _ft_list_size:
    mov rax, 0
  loop:
    cmp rdi, 0
    je terminate
    inc rax
    ; set next value to struct.next (8 byte offset rdi)
    mov rdi, [rdi + NEXT_NODE]
    ; iterate until NULL
    jmp loop
  terminate:
    ret
