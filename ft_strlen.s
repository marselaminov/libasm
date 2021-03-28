global _ft_strlen

section	.text

_ft_strlen:
		mov		rax, 0					; put rax to 0
		jmp		loop					; go to loop

increment:
		inc		rax

loop:
		cmp 	BYTE [rdi + rax], 0		; compare the pointed char to 0
		je		close					; if == \0 -> close programm and return result
		jne		increment				; if compare was false -> go to rax++
		jmp		loop					; continue loop

close:
		ret								; return rax