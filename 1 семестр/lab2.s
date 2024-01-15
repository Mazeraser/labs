	.file	"lab2.c"
	.text
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC2:
	.ascii "%i\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	movl	$7, -4(%rbp)
	movl	$14, -8(%rbp)
	movl	$21, -12(%rbp)
	pxor	%xmm2, %xmm2
	cvtsi2sdl	-4(%rbp), %xmm2
	movq	%xmm2, %rax
	movsd	.LC0(%rip), %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	call	pow
	movapd	%xmm0, %xmm1
	addsd	%xmm0, %xmm1
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-4(%rbp), %xmm0
	addsd	%xmm0, %xmm1
	movsd	.LC1(%rip), %xmm0
	addsd	%xmm1, %xmm0
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -16(%rbp)
	pxor	%xmm3, %xmm3
	cvtsi2sdl	-8(%rbp), %xmm3
	movq	%xmm3, %rax
	movsd	.LC0(%rip), %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	call	pow
	movapd	%xmm0, %xmm1
	addsd	%xmm0, %xmm1
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-8(%rbp), %xmm0
	addsd	%xmm0, %xmm1
	movsd	.LC1(%rip), %xmm0
	addsd	%xmm1, %xmm0
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -20(%rbp)
	pxor	%xmm4, %xmm4
	cvtsi2sdl	-12(%rbp), %xmm4
	movq	%xmm4, %rax
	movsd	.LC0(%rip), %xmm0
	movapd	%xmm0, %xmm1
	movq	%rax, %xmm0
	call	pow
	movapd	%xmm0, %xmm1
	addsd	%xmm0, %xmm1
	pxor	%xmm0, %xmm0
	cvtsi2sdl	-12(%rbp), %xmm0
	addsd	%xmm0, %xmm1
	movsd	.LC1(%rip), %xmm0
	addsd	%xmm1, %xmm0
	cvttsd2sil	%xmm0, %eax
	movl	%eax, -24(%rbp)
	movl	-16(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	-20(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	-24(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	printf
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	0
	.long	1073741824
	.align 8
.LC1:
	.long	0
	.long	1078231040
	.ident	"GCC: (GNU) 11.3.0"
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	pow;	.scl	2;	.type	32;	.endef
