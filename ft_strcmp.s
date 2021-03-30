global _ft_strcmp

section	.text

_ft_strcmp:
		xor		rax, rax
		xor		rbx, rbx
		jmp		loop

increment:
		inc		rdi
		inc		rsi

loop:
		mov		al, BYTE [rdi]
		mov		bl, BYTE [rsi]
		cmp		al, 0
		je		close
		cmp		bl, 0
		je		close
		cmp		al, bl
		jne		close
		jmp		increment
		jmp		loop

close:
		sub		rax, rbx
		ret