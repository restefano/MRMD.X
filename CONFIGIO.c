/**
 * @file CONFIGIO.c
 * @brief Configuração das I/Os com base em CONFIGIO.h
 * @author estefano
 * @date 15 de Agosto de 2014
 * <p>(C) Copyright <b> WEG CRITICAL POWER </b> - Todos os direitos reservados.</p>
 * @see http://www.weg.net
 */

#include "CONFIGIO.h"
#include "PINAGEM.h"

void Configura_IO(void){

    //  Configura�oes iniciais do controlador

    ADCON1 |= 0x0F;
    ANCON0 = INICIAL_ANCON0;
    ANCON1 = INICIAL_ANCON1;

    PORTA = INICIAL_PORTA;
    PORTB = INICIAL_PORTB;
    PORTC = INICIAL_PORTC;
    PORTD = INICIAL_PORTD;
    PORTE = INICIAL_PORTE;

    TRISA = INICIAL_TRISA;
    TRISB = INICIAL_TRISB;
    TRISC = INICIAL_TRISC;
    TRISD = INICIAL_TRISD;
    TRISE = INICIAL_TRISE;

}

