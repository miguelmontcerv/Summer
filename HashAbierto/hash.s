	.file	"hash.c"
	.text
	.globl	FuncionHash
	.type	FuncionHash, @function
FuncionHash:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -40(%rbp)
	movl	$0, -24(%rbp)
	movl	$9973, -16(%rbp)
	movl	$509, -12(%rbp)
	movl	$7372, -8(%rbp)
	movl	$200, -4(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L2
.L3:
	movq	-40(%rbp), %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	addl	%eax, -24(%rbp)
	addl	$1, -20(%rbp)
.L2:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L3
	movl	-24(%rbp), %eax
	imull	-12(%rbp), %eax
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	addl	%edx, %eax
	cltd
	idivl	-16(%rbp)
	movl	%edx, %eax
	cltd
	idivl	-4(%rbp)
	movl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	FuncionHash, .-FuncionHash
	.globl	AgregarDato
	.type	AgregarDato, @function
AgregarDato:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	$0, -24(%rbp)
	movl	$0, -20(%rbp)
	cmpq	$0, -40(%rbp)
	je	.L11
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L8
	movl	$24, %edi
	call	malloc@PLT
	movq	%rax, %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-40(%rbp), %rax
	movq	(%rax), %rbx
	movl	$200, %edi
	call	malloc@PLT
	movq	%rax, (%rbx)
.L8:
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	FuncionHash
	movl	%eax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	jne	.L9
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rax, %rdx
	movq	-48(%rbp), %rax
	movq	%rax, (%rdx)
	jmp	.L12
.L9:
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	-24(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L12
	movq	-40(%rbp), %rax
	movq	(%rax), %rax
	movq	16(%rax), %rax
	movq	-40(%rbp), %rdx
	movq	(%rdx), %rbx
	movq	-48(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	agregarElemento
	movq	%rax, 16(%rbx)
	nop
	jmp	.L12
.L11:
	nop
	jmp	.L5
.L12:
	nop
.L5:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	AgregarDato, .-AgregarDato
	.globl	BuscarDato
	.type	BuscarDato, @function
BuscarDato:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -8(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L14
	movl	$0, %eax
	jmp	.L15
.L14:
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	FuncionHash
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L16
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L17
	movl	$1, %eax
	jmp	.L15
.L17:
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	buscarElemento
	jmp	.L15
.L16:
	movl	$0, %eax
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	BuscarDato, .-BuscarDato
	.section	.rodata
.LC0:
	.string	"eliminando...\n\t"
.LC1:
	.string	"HECHO"
.LC2:
	.string	"La palabra no se encontro"
	.text
	.globl	EliminarDato
	.type	EliminarDato, @function
EliminarDato:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -8(%rbp)
	cmpq	$0, -24(%rbp)
	je	.L25
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	FuncionHash
	movl	%eax, -4(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L21
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L22
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	$0, (%rax)
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	jmp	.L18
.L22:
	cmpl	$200, -4(%rbp)
	jne	.L18
	movl	$0, -8(%rbp)
	jmp	.L23
.L24:
	addl	$1, -8(%rbp)
.L23:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L24
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	(%rax), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	$0, (%rax)
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	jmp	.L18
.L21:
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	jmp	.L18
.L25:
	nop
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	EliminarDato, .-EliminarDato
	.globl	agregarElemento
	.type	agregarElemento, @function
agregarElemento:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	$0, -8(%rbp)
	movl	$16, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	agregarElemento, .-agregarElemento
	.globl	buscarElemento
	.type	buscarElemento, @function
buscarElemento:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	$0, -8(%rbp)
	movl	$0, -12(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L29
.L32:
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	-32(%rbp), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcmp@PLT
	testl	%eax, %eax
	jne	.L30
	movl	$1, -12(%rbp)
	movl	$1, %eax
	jmp	.L28
.L30:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
.L29:
	cmpq	$0, -8(%rbp)
	jne	.L32
	cmpl	$0, -12(%rbp)
	jne	.L33
	movl	$0, %eax
	jmp	.L28
.L33:
.L28:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	buscarElemento, .-buscarElemento
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
