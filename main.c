/**
 * @file main.c
 * @brief Arquivo principal do firmware do Módulo do Retificador Modular Digital
 * @author Ricardo Estefano Rosa (restefano)
 * @date 09/08/14
 * <p>(C) Copyright <b> WEG CRITICAL POWER </b> - Todos os direitos reservados.</p>
 * @see http://www.weg.net
 */

#include <stdio.h>
#include <stdlib.h>
#include "_includes.h"
#include <plib/pwm.h>
#include <plib/timers.h>

void Habilita_PWM(void);

int main(int argc, char** argv) {
/**@brief Início do funcionamento do sistema.<br>
 * Configura o sistema e executa o loop principal.
 * @date 09/08/15
 * @param
 *      argc Número de argumentos
 *      argv Ponteiro para a lista de argumentos
 * @return EXIT_SUCCESS (quando finalizada)
 * @author Ricardo Estefano Rosa (restefano)
 */
    
    Configura_IO();

    TRISCbits.TRISC2 = 0;

    Habilita_PWM();


    while (1)
    {

    }


    return (EXIT_SUCCESS);
}


void Habilita_PWM(void){
/**@brief Habilita a geração de PWM em 25kHz.<br>
 * Inicia a geração de pulsos com pulso mínimo.
 * @date 15/08/15
 * @return Nada.
 * @author Ricardo Estefano Rosa (restefano)
 */

    unsigned int dutycycle = 500;
    unsigned char Timer2Config;    ///< PWM clock source A
    unsigned char Timer4Config;    ///<PWM clock source B
    union PWMDC DCycle;


    INTCON1bits.GIE = 0;
    CCPTMRS = 0b00000010;

    Timer2Config = T2_PS_1_4; //prescale 4
    OpenTimer2(Timer2Config);

    T2CONbits.TMR2ON = 0;  // STOP TIMER2 registers to POR state
    PR2 = 160;          // Set period
    TMR2 = 0;
    T2CONbits.TMR2ON = 1;  // Turn on PWM1

    dutycycle = 0;
    // Save the dutycycle value in the union
    DCycle.lpwm = dutycycle << 6;
    // Write the high byte into CCPR1L
    CCPR1L = DCycle.bpwm[1];
    // Write the low byte into CCP1CON5:4
    CCP1CON = (CCP1CON & 0xCF) | ((DCycle.bpwm[0] >> 2) & 0x30);
    CCP1CON |= 0b00001100;    //ccpxm3:ccpxm0 11xx=pwm mode

    while (TMR2 < 74)
    {
    }

    Timer4Config = T4_PS_1_4; //prescale 4
    OpenTimer4(Timer4Config);

    T4CONbits.TMR4ON = 0;  // STOP TIMER2 registers to POR state
    PR4 = 160;          // Set period
    T4CONbits.TMR4ON = 1;  // Turn on PWM1

    dutycycle = 0;
    // Save the dutycycle value in the union
    DCycle.lpwm = dutycycle << 6;
    // Write the high byte into CCPR1L
    CCPR2L = DCycle.bpwm[1];
    // Write the low byte into CCP1CON5:4
    CCP2CON = (CCP2CON & 0xCF) | ((DCycle.bpwm[0] >> 2) & 0x30);
    CCP2CON |= 0b00001100;    //ccpxm3:ccpxm0 11xx=pwm mode


    INTCON1bits.GIE = 1;

}