/**
 * @file PINAGEM.h
 * @brief Definição da pinagem do microcontrolador
 * @author Ricardo Estefano Rosa (restefano)
 * @date 09/08/14
 * <p>(C) Copyright <b> WEG CRITICAL POWER </b> - Todos os direitos reservados.</p>
 * 
 */

#ifndef PINAGEM_H
#define	PINAGEM_H

#include <PIC18F46K80.H>

/* ===================== */
/* DEFINIÇÕES DA PORTA A */
/* ===================== */

/// Não Conectado
#define _RA7_NC   PORTAbits.RA7 /// Não Conectado

/// Não Conectado
#define _RA6_NC   PORTAbits.RA6

/// Bit 0 do Endereço e LED 10 do Painel
#define _ADDR0_L10 PORTAbits.RA5

/// Usado como VDDCORE/VCAP

#define _VDDCORE  PORTAbits.RA4 
/// Referência Analógica 5.00V

#define _ANREF    PORTAbits.RA3 
/// Amostra da temperatura interna (10mV por grau Celsius)

#define _ATI      PORTAbits.RA2
/// Amostra da corrente de saída (XXXmV por Ampère)

#define _ACS      PORTAbits.RA1 
/// Amostra da tensão de saída (XXXmV por Volt)

#define _ATS      PORTAbits.RA0 

/// Direçao dos pinos da porta (1 = Entrada, 0 = Saída)
#define INICIAL_TRISA   0b11111111  
/// Estado inicial dos pinos da porta (1 = Ligado, 0 = Desligado)
#define INICIAL_PORTA   0b00000000  // Estado inicial


/* ===================== */
/* DEFINIÇÕES DA PORTA B */
/* ===================== */

/// Dado da programação In-Circuit
#define _PGD      PORTBbits.RB7

/// Clock da programação in-circuit
#define _PGC      PORTBbits.RB6

/// LED 3 (Painel)
#define _LED3     PORTBbits.RB5

/// LED 4 (Painel)
#define _LED4     PORTBbits.RB4

/// RX da interface CAN
#define _CANRX    PORTBbits.RB3

/// TX da interface CAN
#define _CANTX    PORTBbits.RB2

/// Bit 1 do Endereço / LED 9 (Painel)
#define _ADDR1_L9 PORTBbits.RB1

/// Termostato -> 0 = SOBRETEMPERATURA!
#define _TMTT     PORTBbits.RB0 

/// Direçao dos pinos da porta (1 = Entrada, 0 = Saída)
#define INICIAL_TRISB   0b11001011
/// Estado inicial dos pinos da porta (1 = Ligado, 0 = Desligado)
#define INICIAL_PORTB   0b00000000  

/* ===================== */
/* DEFINIÇÕES DA PORTA C */
/* ===================== */

/// RX da interface 485
#define _RXD        PORTCbits.RC7

/// TX da interface 485
#define _TXD        PORTCbits.RC6

/// DAT do ICSP / LED 6 (Painel)
#define _DAT_LED6   PORTCbits.RC5

/// Bit 2 do Endereço e DI da interface 485
#define _ADDR2_DI   PORTCbits.RC4

/// CLK do ICSP / LED 7 (Painel)
#define _CLK_LED7   PORTCbits.RC3

/// Saída PWM 2
#define _PWM2       PORTCbits.RC2

/// Indicador de Pré-Carga. 1=OK!
#define _PCOK       PORTCbits.RC1 

/// LED DEFEITO - VERMELHO
#define _LED_DEF_VM PORTCbits.RC0 

/// Direçao dos pinos da porta (1 = Entrada, 0 = Saída)
#define INICIAL_TRISC   0b10111010  
/// Estado inicial dos pinos da porta (1 = Ligado, 0 = Desligado)
#define INICIAL_PORTC   0b00000000  


/* ===================== */
/* DEFINIÇÕES DA PORTA D */
/* ===================== */

/// LED 1 (Painel)
#define _LED1     PORTDbits.RD7

/// LED 2 (Painel)
#define _LED2     PORTDbits.RD6

/// LED 5 (Painel)
#define _LED 5    PORTDbits.RD5

/// Saída PWM 1
#define _PWM1     PORTDbits.RD4 

/// Bit 3 do Endereço / LED 8 (Painel)
#define _ADDR3_L8 PORTDbits.RD3

/// Habilita Relé de Entrada
#define _HRLE     PORTDbits.RD2 

/// Habilita Relé de Consumidor
#define _HRLC     PORTDbits.RD1 

/// Habilita Relé de Pré-Carga
#define _HRPC     PORTDbits.RD0 

/// Direçao dos pinos da porta (1 = Entrada, 0 = Saída)
#define INICIAL_TRISD   0b00001000  
/// Estado inicial dos pinos da porta (1 = Ligado, 0 = Desligado)
#define INICIAL_PORTD   0b00000000  


/* ===================== */
/* DEFINIÇÕES DA PORTA E */
/* ===================== */

/// LED OPERAÇÃO - VERDE
#define _LED_OP_VD  PORTEbits.RE2 

/// LED OPERAÇÃO - VERMELHO
#define _LED_OP_VM  PORTEbits.RE1 

/// LED DEFEITO - VERDE
#define _LED_DEF_VD PORTEbits.RE0 

/// Direçao dos pinos da porta (1 = Entrada, 0 = Saída)
#define INICIAL_TRISE   0b11111000  
/// Estado inicial dos pinos da porta (1 = Ligado, 0 = Desligado)
#define INICIAL_PORTE   0b00000000  

/* ===================== */
/* DEFINIÇÕES PINOS A/D  */
/* ===================== */

/// Configurações individuais das portas ANX
#define INICIAL_ANCON0  0b00000111 
/// Configurações individuais das portas ANX
#define INICIAL_ANCON1  0b00000000 


#endif	/* PINAGEM_H */

