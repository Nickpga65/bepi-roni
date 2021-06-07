; Nicolas Rodriguez
; June 5, 2021
; RAM Labels

	.zeropage

	; different RAM segments
	; a little brainstorming here
	; i want a 'heap', virtual stack, buffers and space
	; to hold a program for execution. also pointers. lots of pointers.
	;
	; i should keep in mind that i can rebuild everything if this setup
	; does not make much sense
	;
	; i think i will be using the zeropage as a regular workspace with
	; some zeropage pointers, which are crucial
	;
	; the heap is something i imagine a 'systemcall' would be used to
	; obtain the necessary memory for a specific subroutine/program


	.segment "HEAP"
	; how big should this heap be? what will i use it for?

	.segment "VIRTUAL_STACK"
	; this is how i intend to pass arguments to
	; different subroutines
	; i should build macros based off of the specific use case

	.segment "BUFFER"
	; here i will place data buffers
	; for example, the 65c51 serial connection

	.segment "POINTER"
	; here i will place non-zeropage pointers

	.segment "FLAG"
	; software flags that indicate specific requests
	; for example, requesting space on the heap

	.segment "PROGRAM"
	; location of the program that can be uploaded via a serial connection

	.segment "BSS"
