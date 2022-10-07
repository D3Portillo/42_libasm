global _ft_read

; fn(%rdi, %rsi, %rdx)
; - %rdi File Descriptor
; - %rsi Writable buffer, destination
; - %rdx N bytes to read from %rdi
section .text
  _ft_read:
    ret
