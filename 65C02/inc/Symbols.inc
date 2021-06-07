; Nicolas Rodriguez
; June 5, 2021
; Constant Symbols

;******** I/O ADDRESSES ********

; --------------------------ACIA
ACIA        = $D000
ACIA_RT     = ACIA + $0  ; transmit and recieve registers
ACIA_SR     = ACIA + $1  ; programmed reset. status register
ACIA_CMD    = ACIA + $2  ; command register
ACIA_CNT    = ACIA + $3  ; control register

; --------------------------VIA
VIA1        = $D200
VIA1_PORTB  = VIA1 + $0
VIA1_PORTA  = VIA1 + $1
VIA1_DDRB   = VIA1 + $2
VIA1_DDRA   = VIA1 + $3
VIA1_T1_LC  = VIA1 + $4	    ; Read T1 low order counter only
VIA1_T1_HC  = VIA1 + $5	    ; Read/Write T1 high order counter
VIA1_T1_LL  = VIA1 + $6	    ; Read/Write T1 low order latch
VIA1_T1_HL  = VIA1 + $7	    ; Read/Write T1 high order latch
VIA1_T2_L   = VIA1 + $8	    ; Read low order counter. Write low order latch
VIA1_T2_H   = VIA1 + $9     ; Read/Write high order counter
VIA1_SR     = VIA1 + $a	    ; Shift register. cb1 clk. cb2 data
VIA1_ACR    = VIA1 + $b     ; Auxillary Control Register
VIA1_PCR    = VIA1 + $c	    ; Peripheral Control Register
VIA1_IFR	= VIA1 + $d	    ; Interupt Flag Register
VIA1_IER    = VIA1 + $e     ; Interupt Enable Register

VIA2        = $D400
VIA2_PORTB  = VIA2 + $0
VIA2_PORTA  = VIA2 + $1
VIA2_DDRB   = VIA2 + $2
VIA2_DDRA   = VIA2 + $3
VIA2_T1_LC  = VIA2 + $4	    ; Read T1 low order counter only
VIA2_T1_HC  = VIA2 + $5	    ; Read/Write T1 high order counter
VIA2_T1_LL  = VIA2 + $6	    ; Read/Write T1 low order latch
VIA2_T1_HL  = VIA2 + $7	    ; Read/Write T1 high order latch
VIA2_T2_L   = VIA2 + $8	    ; Read low order counter. Write low order latch
VIA2_T2_H   = VIA2 + $9     ; Read/Write high order counter
VIA2_SR     = VIA2 + $a	    ; Shift register
VIA2_ACR    = VIA2 + $b     ; Auxillary Control Register
VIA2_PCR    = VIA2 + $c	    ; Peripheral Control Register
VIA2_IFR	= VIA2 + $d	    ; Interupt Flag Register
VIA2_IER    = VIA2 + $e     ; Interupt Enable Register

;******** I/O CONSTANTS ********


; *** Interrupt Enable Register (VIA) ***

VIA_IRQ7 	= $80      ; Enables interrupts on VIA
VIA_IRQ6 	= $40      ; Timer 1
VIA_IRQ5 	= $20      ; Timer 2
VIA_IRQ4 	= $10      ; CB1
VIA_IRQ3 	= $08      ; CB2
VIA_IRQ2 	= $04      ; Shift register
VIA_IRQ1 	= $02      ; CA1
VIA_IRQ0 	= $01      ; CA2

; *** Auxillary Control Register (VIA) ***

T1_MODE3    = $C0      ; Continous IRQ. PB7 squarewave
T1_MODE2    = $80      ; Single IRQ. Single PB7 pulse
T1_MODE1    = $40      ; Continous IRQ. No squarewave
T1_MODE0    = $00      ; Single IRQ. No pulse

T2_MODE1    = $20      ; count pulses on PORTB 6
T2_MODE0    = $00      ; timed irq

SR_MODE0    = $00      ; disable shift register
SR_MODE1    = $04      ; shift in. t2
SR_MODE2    = $08      ; shift in. phi2
SR_MODE3    = $0C      ; shift in. cb1 (ext)
SR_MODE4    = $10      ; shift out. free running at t2
SR_MODE5    = $14      ; shift out. t2
SR_MODE6    = $18      ; shift out. phi2
SR_MODE7    = $1C      ; shift out cb1 (ext)

; *** Command Register (ACIA) ***

COMM_MODE0  = $09      ; No parity. No echo. RTS low. IRQ Tx no. Rx. Yes.
COMM_MODE1  = $01      ; No parity. No echo. RTS high. IRQ Tx no. Rx. Yes.
COMM_MODE2  = $0a      ; No parity. No echo. RTS low. IRQ Tx no. Rx. No.
COMM_MODE3  = $00      ; Turn ACIA off

; *** Control Register (ACIA) ***

CONT_MODE0  = $1E      ; 1 stop bit. No parity. 8 bits. Baud. 9600.
CONT_MODE1  = $1F      ; 1 stop bit. No parity. 8 bits. Baud. 19200.
