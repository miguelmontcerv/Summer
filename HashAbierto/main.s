	.file	"main.c"
	.text
	.section	.rodata
.LC0:
	.string	"Daniel Ernesto"
.LC1:
	.string	"Ernesto Daniel"
.LC2:
	.string	"Miguel"
.LC3:
	.string	"Maria Jose"
	.align 8
.LC4:
	.string	"Si es 1 se encontro, si es 0 no se pudo encontrar: %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -16(%rbp)
	leaq	-16(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	AgregarDato@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	call	AgregarDato@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	call	AgregarDato@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	call	AgregarDato@PLT
	movq	-16(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	BuscarDato@PLT
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	EliminarDato@PLT
	movq	-16(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	BuscarDato@PLT
	movl	%eax, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
