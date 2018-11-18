
/*
Proyecto: MISE Micros 16bits 
Fichero: leds_G7.c

Grupo: G7    Autor: Susana & Husein
v0.0	Fecha: 15-X-2018

 Descripcion
 * 
 * 
 * 
 * Requiere fichero: 
 */

#include "p24HJ256GP610A.h"
#include "Explorer16_G7_MISE_v0.h"
//#include "IO_G0_MISE_v0.h"

#include "leds_G7.h"

#define LED_D3_LAT      LATAbits.LATA0
#define LED_D4_LAT      LATAbits.LATA1
#define LED_D5_LAT      LATAbits.LATA2
#define LED_D6_LAT      LATAbits.LATA3
#define LED_D7_LAT      LATAbits.LATA4
#define LED_D8_LAT      LATAbits.LATA5
#define LED_D9_LAT      LATAbits.LATA6
#define LED_D10_LAT     LATAbits.LATA7      //Overlaps with S5

#define LED_D3_TRIS     TRISAbits.TRISA0
#define LED_D4_TRIS     TRISAbits.TRISA1
#define LED_D5_TRIS     TRISAbits.TRISA2
#define LED_D6_TRIS     TRISAbits.TRISA3
#define LED_D7_TRIS     TRISAbits.TRISA4
#define LED_D8_TRIS     TRISAbits.TRISA5
#define LED_D9_TRIS     TRISAbits.TRISA6
#define LED_D10_TRIS    TRISAbits.TRISA7    //Overlaps with S5




#define LED_ON  1
#define LED_OFF 0

#define PIN_INPUT   1
#define PIN_OUTPUT  0

/*********************************************************************
* Function: void LED_On(LED led);
*
* Overview: Turns requested LED on
*
* PreCondition: LED configured via LED_Configure()
*
* Input: LED led - enumeration of the LEDs available in this
*        demo.  They should be meaningful names and not the names of
*        the LEDs on the silkscreen on the board (as the demo code may
*        be ported to other boards).
*         i.e. - LED_On(LED_CONNECTION_DETECTED);
*
* Output: none
*
********************************************************************/
void LED_On(LED led)
{
    switch(led)
    {
        case LED_D3:
            LED_D3 = LED_ON ;
            break ;

        case LED_D4:
            LED_D4 = LED_ON ;
            break ;

        case LED_D5:
            LED_D5 = LED_ON;
            break;

        case LED_D6:
            LED_D6 = LED_ON;
            break;

        case LED_D7:
            LED_D7 = LED_ON;
            break;

        case LED_D8:
            LED_D8 = LED_ON;
            break;

        case LED_D9:
            LED_D9 = LED_ON ;
            break ;

        case LED_D10:
            LED_D10 = LED_ON ;
            break ;

        default:
            break;
    }
}

/*********************************************************************
* Function: void LED_Off(LED led);
*
* Overview: Turns requested LED off
*
* PreCondition: LED configured via LEDConfigure()
*
* Input: LED led - enumeration of the LEDs available in this
*        demo.  They should be meaningful names and not the names of
*        the LEDs on the silkscreen on the board (as the demo code may
*        be ported to other boards).
*         i.e. - LED_Off(LED_CONNECTION_DETECTED);
*
* Output: none
*
********************************************************************/
void LED_Off(LED led)
{
    switch(led)
    {
        case LED_D3:
            LED_D3 = LED_OFF ;
            break ;

        case LED_D4:
            LED_D4 = LED_OFF ;
            break ;

        case LED_D5:
            LED_D5 = LED_OFF;
            break;

        case LED_D6:
            LED_D6 = LED_OFF;
            break;

        case LED_D7:
            LED_D7 = LED_OFF;
            break;

        case LED_D8:
            LED_D8 = LED_OFF;
            break;

        case LED_D9:
            LED_D9 = LED_OFF ;
            break ;

        case LED_D10:
            LED_D10 = LED_OFF ;
            break ;

        default:
            break;
    }
}

/*********************************************************************
* Function: void LED_Toggle(LED led);
*
* Overview: Toggles the state of the requested LED
*
* PreCondition: LED configured via LEDConfigure()
*
* Input: LED led - enumeration of the LEDs available in this
*        demo.  They should be meaningful names and not the names of
*        the LEDs on the silkscreen on the board (as the demo code may
*        be ported to other boards).
*         i.e. - LED_Toggle(LED_CONNECTION_DETECTED);
*
* Output: none
*
********************************************************************/
void LED_Toggle(LED led)
{
    switch(led)
    {
        case LED_D3:
            LED_D3 ^= 1;
            break;

        case LED_D4:
            LED_D4 ^= 1;
            break;

        case LED_D5:
            LED_D5 ^= 1;
            break;

        case LED_D6:
            LED_D6 ^= 1;
            break;

        case LED_D7:
            LED_D7 ^= 1;
            break;

        case LED_D8:
            LED_D8 ^= 1;
            break;

        case LED_D9:
            LED_D9 ^= 1;
            break;

        case LED_D10:
            LED_D10 ^= 1;
            break;

        default:
            break;
    }
}

/*********************************************************************
* Function: bool LED_Get(LED led);
*
* Overview: Returns the current state of the requested LED
*
* PreCondition: LED configured via LEDConfigure()
*
* Input: LED led - enumeration of the LEDs available in this
*        demo.  They should be meaningful names and not the names of
*        the LEDs on the silkscreen on the board (as the demo code may
*        be ported to other boards).
*         i.e. - LED_Get(LED_CONNECTION_DETECTED);
*
* Output: true if on, false if off
*
********************************************************************/
bool LED_Get(LED led)
{
    switch(led)
    {
        case LED_D3:
            return ( ( LED_D3 == LED_ON ) ? true : false ) ;

        case LED_D4:
            return ( ( LED_D4 == LED_ON ) ? true : false ) ;

        case LED_D5:
            return ( (LED_D5 == LED_ON) ? true : false );

        case LED_D6:
            return ( (LED_D6 == LED_ON) ? true : false );

        case LED_D7:
            return ( (LED_D7 == LED_ON) ? true : false );

        case LED_D8:
            return ( (LED_D8 == LED_ON) ? true : false );

        case LED_D9:
            return ( ( LED_D9 == LED_ON ) ? true : false ) ;

        case LED_D10:
            return ( ( LED_D10 == LED_ON ) ? true : false ) ;

        default:
            break;
    }
    return false;
}

/*********************************************************************
* Function: void LED_Enable(LED led);
*
* Overview: Configures the LED for use by the other LED API
*
* PreCondition: none
*
* Input: LED led - enumeration of the LEDs available in this
*        demo.  They should be meaningful names and not the names of
*        the LEDs on the silkscreen on the board (as the demo code may
*        be ported to other boards).
*
* Output: none
*
********************************************************************/
void LED_Enable(LED led)
{
    switch(led)
    {
        case LED_D3:
            LED_D3_TRIS = PIN_OUTPUT;
            break;

        case LED_D4:
            LED_D4_TRIS = PIN_OUTPUT;
            break;

        case LED_D5:
            LED_D5_TRIS = PIN_OUTPUT;
            break;

        case LED_D6:
            LED_D6_TRIS = PIN_OUTPUT;
            break;

        case LED_D7:
            LED_D7_TRIS = PIN_OUTPUT;
            break;

        case LED_D8:
            LED_D8_TRIS = PIN_OUTPUT;
            break;

        case LED_D9:
            LED_D9_TRIS = PIN_OUTPUT;
            break;

        case LED_D10:
            LED_D10_TRIS = PIN_OUTPUT;
            break ;

        default:
            break;
    }
}





int contador_5ms=0, flag_1s=0,milis_F;


// ============================================
void Inic_Leds ()// Inicializa LEDS  Explorer16: RA0, ..., RA7
// Inicializa las patas de los leds de salida y el valor inicial
{
// 
    TRISA = 0x0000; //Todos los LEDs de salida
    

// Los leds est?n conectados a tierra ->
// -> Un '1' en la salida del PIC lo enciende // -> Un '0' lo Apaga
    LATA=0x0000; //todos los LEDs apagados
  
} // Fin Inic_Leds

