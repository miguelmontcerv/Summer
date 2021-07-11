	.file	"modulo.c"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Daniel Ernesto"
.LC1:
	.string	"El modulo es: %d\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB23:
	.cfi_startproc
	leaq	1+.LC0(%rip), %rcx
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	xorl	%esi, %esi
	movl	$68, %eax
	.p2align 4,,10
	.p2align 3
.L2:
	addq	$1, %rcx
	addl	%eax, %esi
	movsbl	-1(%rcx), %eax
	testb	%al, %al
	jne	.L2
	movl	%esi, %eax
	movl	$1374389535, %edx
	movl	$1, %edi
	imull	%edx
	movl	%esi, %eax
	sarl	$31, %eax
	sarl	$6, %edx
	subl	%eax, %edx
	xorl	%eax, %eax
	imull	$200, %edx, %edx
	subl	%edx, %esi
	movl	%esi, %edx
	leaq	.LC1(%rip), %rsi
	call	__printf_chk@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE23:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
