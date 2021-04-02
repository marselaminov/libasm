global _ft_strcmp

section	.text

_ft_strcmp:
		xor		rax, rax		; put zero in register
		xor		rbx, rbx		; put zero in register
		jmp		loop

increment:
		inc		rdi
		inc		rsi

loop:
		mov		al, BYTE [rdi]	; move rdi value in al register
		mov		bl, BYTE [rsi]	; move rsi value in bl register
		cmp		al, bl			; check equal
		jne		close			; if not -> return rax
		cmp		al, 0			; check null
		je		close			; if null -> return rax
		cmp		bl, 0			; check null
		je		close			; if null -> return rax
		jmp		increment
		jmp		loop

close:
		sub		rax, rbx		; command sub ir is -> rax = rax - rbx
		ret