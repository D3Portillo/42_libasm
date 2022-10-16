global _ft_list_push_front
extern _malloc
extern _ft_write

; @see https://stackoverflow.com/questions/23299846/pointer-for-the-first-struct-member-list-in-nasm-assembly
struc node
  .data: resq 1 ; 8 bytes for (void*) PTR
  .next: resq 1 ; 8 bytes self PTR
endstruc

; ft_list_push_front(t_list **genesis, void *data)
section .text
  _ft_list_push_front:
    push rsp ; force align stack
    push rdi ; save node genesis PTR
    push rsi ; save data to stack
    mov rdi, node_size ; sizeof(node)
    call _malloc
    pop rsi
    pop rdi
    pop rsp
    mov [rax + node.data], rsi
    mov rcx, [rdi]
    ; get current genesis node (NULL if None.)
    mov [rax + node.next], rcx
    mov [rdi], rax
    ret
