/* 
 * File:   main.c
 * Author: Marcos López Merayo
 *
 * Firmware sencila que implementa un circuito de auto-disparo para joysticks y
 * gamepads compatible con las normas Atari/Commodore (adaptable a MSX, Amstrad,
 * etc).
 * Versión específica para el proyecto A4 de Enrique García. Más info sobre el
 * proyecto en su canal de YouTube: 
 * https://www.youtube.com/channel/UCb7_NkehBK6dyK2aAPUDlYA
 *
 * Este programa se ha escrito para el microcontrolador PIC 10F200
 * IDE: MPLAB X v2.05
 * Compilador: XC8
 * 
 * Created on 29 de mayo de 2015, 23:23
 */

#include <stdio.h>
#include <stdlib.h>
#include <GenericTypeDefs.h>
#include <xc.h>

// Bits de configuración del PIC
// CONFIG
#pragma config WDTE = OFF       // Watchdog Timer (WDT disabled)
#pragma config CP = OFF         // Code Protect (Code protection off)
#pragma config MCLRE = OFF      // Master Clear Enable (GP3/MCLR pin fuction is digital I/O, MCLR internally tied to VDD)

#define __XTAL_FREQ 4000000     // 4MHz
#define FIRE    GPIObits.GP0    // Puerto para la salida de auto-disparo
#define SPEED   GPIObits.GP1    // Jumper selección de velocidad (normal/turbo)
#define P2      GPIObits.GP2
#define P3      GPIObits.GP3
#define HISPEED 42              // 12 disparos/s (turbo)
#define LOSPEED 63              // 8 disparos/s  (normal)

void delay_ms(long milisecs);
int MS;

/*
 * Bucle principal
 */
int main(void) {

    TRIS = 0b11111110;    // Todos los puertos como entrada excepto GP0 (salida Auto-FIRE)
    FIRE = 0;

    while(TRUE){
        delay_ms(MS);    
        FIRE = 1;
        if (SPEED==1){
            MS = HISPEED;   // Velocidad Turbo
        }
        delay_ms(MS);
        FIRE = 0;
        if (SPEED==0){
            MS = LOSPEED;   // Velocidad Normal
        }
    }

    
}


// Función para realizar retardos en milisegundos
void delay_ms(long milisecs){
    while (milisecs > 0) {
        _delay(1000);   // 1ms con reloj de 4MHz
        milisecs--;     // restamos 1 del contador
    }
}