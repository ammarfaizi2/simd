section .text
	global add_simd
add_simd:
	movdqa xmm0, [rdi]
	movdqa xmm1, [rsi]
	addps xmm0, xmm1
	movdqa [rdx], xmm0
	ret
