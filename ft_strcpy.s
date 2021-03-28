global _ft_strcpy

section	.text

_ft_strcpy:
		mov		rcx, 0					; set rcx to 0
		mov		rdx, 0
		cmp		rsi, 0
		jz		close
		jmp		loop					; go to loop

increment:
		inc		rcx

loop:
		mov		dl, BYTE [rsi + rcx]	; put char pointed by rsi + rcx in cl | cl this is rcx register 1 byte (or 8 bits) | 1 char == 1 byte == 8 bits
		mov		BYTE [rdi + rcx], dl	; put char in rdi + rcx
		cmp		dl, 0					; compare rsi char to \0
		je		close					; if rsi char == \0 -> close programm and return result
		jne		increment				; if compare was false -> go to rcx++
		jmp		loop					; continue loop


close:
		mov		rax, rdi				; set rdi to rax
		ret								; return rax