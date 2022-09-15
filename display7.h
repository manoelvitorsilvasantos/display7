/**
 * AUTHOR - MANOEL VITOR
 * DISPLAY 7 SEGMENTOS
 * DATA 20/07/1991
*/
#ifndef DISPLAY_7
#define DISPLAY_7
#include <avr/io.h>
#include <util/delay.h>

class Display
{
    public:
        Display(bool state); //function that turn on or turn off pins.
        void numeros(int valor); //fuction that present values.
        void letras(char letra); //function that present letters in between A at F.
        char letrasPosicao(int valor); //function that return a character, do you must passing to parameter the value of index.
};

#endif
