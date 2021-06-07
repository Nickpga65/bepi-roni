; Nicolas Rodriguez
; June 5, 2021
; ROM Source File

	.setcpu "65C02"
	.localchar '?'

	.include "Symbols.inc"
	.include "RAM.inc"

	.segment "BOOT_LOADER"

reset:
	sei
	ldx #$ff
	txs

	lda #1
	sta VIA1_DDRA

loop:
	inc VIA1_PORTA
	jmp loop

; i can place include source code files here


; here i can write all the main subroutines
; that will be located in ROM
	
	.segment "ROM_LIBRARY"

;mem_req:
	; test destroy/allocate flag
	;rts

;serial_req:
	; request access to the 65C51
	;rts

	.segment "ROM_IRQ"
	.segment "VECTORS"

	.word reset
	.word reset
	.word reset
