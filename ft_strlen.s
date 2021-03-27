section	.text
		global _ft_strlen

_ft_strlen:
		; set rax to 0
		mov		rax, 0
		; go to loop
		jmp		loop

.increm:
		inc		rax

.loop:
		; compare the pointed char to 0
		cmp 	BYTE [rdi + rax], 0
		; if = \0 , close programm
		je		close
		; go to increment if compare was false
		jmp		increm
		; continue loop
		jmp		loop

.close:
		; return rax
		ret