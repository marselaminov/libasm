global _ft_write

extern ___error

section	.text

_ft_write:
	mov		rbx, rdx			; put len of rdx in rbx
	mov		rax, 0x2000004		; set in rax system code of write
	syscall						; make the instruction
	jc		error				; if this not work, write put in CF 1 and jump error
	jnc		close_prog			; if not mistake -> close programm

close_prog:
	mov		rax, rbx			; put rdx (rbx) in rax and return rax
	ret

error:
	push	rdi
	mov		rdi, rax			; put rax in rdi
	call	___error			; call ___error, this function return errno(rdi)
	mov		[rax], rdi			; put rdi in rax (rax memory area)
	mov		rax, -1				; chanse rax to -1 , our write function return fail
	pop		rdi
	ret 