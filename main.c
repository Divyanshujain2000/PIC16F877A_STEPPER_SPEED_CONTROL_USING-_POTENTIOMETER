/*
 * File:   main.c
 * Author: Divyanshu
 *
 * Created on 15 December, 2020, 10:33 PM
 */
/*
 
 WORKING : SPEED CONTROL OF STEPPER MOTOR USING POTENTIOMETER WHICH CHANGES THE DELAY VALUE BETWEEN STEPS
 
 * A0 IS THE ADC CHANNEL USED TO CHANGE THE DELAY BETWWEN STEPS
 * MLCR FOR RESETING THE SPEED TO 1
 * D0 TO D3 PINS FOR STPPER 4 CHANNNELS 
 
 
 
 */


#pragma config FOSC = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF        // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = ON         // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3/PGM pin has PGM function; low-voltage programming enabled)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)
#define _XTAL_FREQ 20000000

#include <xc.h>
#include "MYSTEPPER.h"
#include "EXTRAS.h"
#include "MYADC.h"



void main() {
    /*TRISC = 0x00;
    PORTC = 0x00;*/
    INITSTEPPER();
    init_adc();    
    SETSPEED();
}

