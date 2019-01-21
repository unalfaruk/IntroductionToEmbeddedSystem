	.syntax unified
	.cpu cortex-m4
	.eabi_attribute 27, 1
	.eabi_attribute 28, 1
	.fpu fpv4-sp-d16
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 1
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.thumb
	.syntax unified
	.file	"main.c"
	.text
.Ltext0:
	.cfi_sections	.debug_frame
	.bss
	.align	2
g1:
	.space	4
	.global	g2
	.section	.rodata
	.align	2
	.type	g2, %object
	.size	g2, 4
g2:
	.word	45
	.global	g3
	.data
	.type	g3, %object
	.size	g3, 1
g3:
	.byte	12
	.global	g4
	.bss
	.type	g4, %object
	.size	g4, 1
g4:
	.space	1
	.text
	.align	2
	.global	main
	.thumb
	.thumb_func
	.type	main, %function
main:
.LFB0:
	.file 1 "main.c"
	.loc 1 33 0
	.cfi_startproc
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{r4, r7, lr}
	.cfi_def_cfa_offset 12
	.cfi_offset 4, -12
	.cfi_offset 7, -8
	.cfi_offset 14, -4
	sub	sp, sp, #12
	.cfi_def_cfa_offset 24
	add	r7, sp, #0
	.cfi_def_cfa_register 7
	.loc 1 36 0
	movs	r3, #12
	str	r3, [r7]
	.loc 1 38 0
	movs	r3, #45
	mov	r2, r3
	mov	r3, r2
	lsls	r3, r3, #2
	add	r3, r3, r2
	lsls	r3, r3, #1
	mov	r0, r3
	bl	malloc
	mov	r3, r0
	str	r3, [r7, #4]
	.loc 1 40 0
	ldr	r3, [r7, #4]
	cmp	r3, #0
	bne	.L2
	.loc 1 42 0
	mov	r3, #-1
	b	.L3
.L2:
	.loc 1 45 0
	movs	r4, #0
	b	.L4
.L5:
	.loc 1 47 0 discriminator 3
	ldr	r0, [r7, #4]
	bl	func
	mov	r2, r0
	ldr	r3, .L6
	str	r2, [r3]
	.loc 1 45 0 discriminator 3
	ldr	r3, [r7]
	adds	r3, r3, #1
	str	r3, [r7]
.L4:
	.loc 1 45 0 is_stmt 0 discriminator 1
	movs	r3, #45
	cmp	r4, r3
	blt	.L5
	.loc 1 50 0 is_stmt 1
	movs	r3, #0
.L3:
	.loc 1 51 0
	mov	r0, r3
	adds	r7, r7, #12
	.cfi_def_cfa_offset 12
	mov	sp, r7
	.cfi_def_cfa_register 13
	@ sp needed
	pop	{r4, r7, pc}
.L7:
	.align	2
.L6:
	.word	g1
	.cfi_endproc
.LFE0:
	.size	main, .-main
.Letext0:
	.section	.debug_info,"",%progbits
.Ldebug_info0:
	.4byte	0x106
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	.LASF11
	.byte	0xc
	.4byte	.LASF12
	.4byte	.LASF13
	.4byte	.Ltext0
	.4byte	.Letext0-.Ltext0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	.LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	.LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	.LASF3
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.4byte	.LASF4
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF5
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	.LASF6
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	.LASF7
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF8
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	.LASF9
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	.LASF10
	.uleb128 0x4
	.4byte	.LASF14
	.byte	0x1
	.byte	0x20
	.4byte	0x5d
	.4byte	.LFB0
	.4byte	.LFE0-.LFB0
	.uleb128 0x1
	.byte	0x9c
	.4byte	0xb9
	.uleb128 0x5
	.ascii	"l1\000"
	.byte	0x1
	.byte	0x22
	.4byte	0x5d
	.uleb128 0x1
	.byte	0x54
	.uleb128 0x5
	.ascii	"l2\000"
	.byte	0x1
	.byte	0x23
	.4byte	0xb9
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.uleb128 0x5
	.ascii	"l3\000"
	.byte	0x1
	.byte	0x24
	.4byte	0xbf
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x6
	.byte	0x4
	.4byte	0x5d
	.uleb128 0x7
	.4byte	0x5d
	.uleb128 0x5
	.ascii	"g1\000"
	.byte	0x1
	.byte	0x1a
	.4byte	0x5d
	.uleb128 0x5
	.byte	0x3
	.4byte	g1
	.uleb128 0x8
	.ascii	"g2\000"
	.byte	0x1
	.byte	0x1b
	.4byte	0xe4
	.uleb128 0x5
	.byte	0x3
	.4byte	g2
	.uleb128 0x9
	.4byte	0x5d
	.uleb128 0x8
	.ascii	"g3\000"
	.byte	0x1
	.byte	0x1c
	.4byte	0x72
	.uleb128 0x5
	.byte	0x3
	.4byte	g3
	.uleb128 0x8
	.ascii	"g4\000"
	.byte	0x1
	.byte	0x1d
	.4byte	0x72
	.uleb128 0x5
	.byte	0x3
	.4byte	g4
	.byte	0
	.section	.debug_abbrev,"",%progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x35
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",%progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	.Ltext0
	.4byte	.Letext0-.Ltext0
	.4byte	0
	.4byte	0
	.section	.debug_line,"",%progbits
.Ldebug_line0:
	.section	.debug_str,"MS",%progbits,1
.LASF6:
	.ascii	"long long int\000"
.LASF8:
	.ascii	"unsigned int\000"
.LASF12:
	.ascii	"main.c\000"
.LASF11:
	.ascii	"GNU C99 5.4.1 20160919 -mcpu=cortex-m4 -mthumb -mar"
	.ascii	"ch=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16 -g -"
	.ascii	"O0 -std=c99\000"
.LASF5:
	.ascii	"long unsigned int\000"
.LASF7:
	.ascii	"long long unsigned int\000"
.LASF1:
	.ascii	"unsigned char\000"
.LASF10:
	.ascii	"char\000"
.LASF4:
	.ascii	"long int\000"
.LASF3:
	.ascii	"short unsigned int\000"
.LASF0:
	.ascii	"signed char\000"
.LASF13:
	.ascii	"/home/ecee/Shared/C1M3\000"
.LASF14:
	.ascii	"main\000"
.LASF9:
	.ascii	"sizetype\000"
.LASF2:
	.ascii	"short int\000"
	.ident	"GCC: (15:5.4.1+svn241155-1) 5.4.1 20160919"
