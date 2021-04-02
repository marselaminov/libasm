global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_strcpy

section	.text

_ft_strdup:
		push	rdi				; save value of rdi on stack, we use it later in string copy
		call	_ft_strlen		; strlen get rdi -> return rax (len of string)
		add		rax, 1			; add \0 in rax
		mov		rdi, rax		; put rax in rdi
		call	_malloc			; malloc get rdi (size of allocated memory)
		mov		rdi, rax		; put allocated memory in rdi
		pop		rsi				
		call	_ft_strcpy		; this function get rdi and rsi as args and copy rsi in rdi
		ret