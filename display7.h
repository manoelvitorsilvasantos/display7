/**
 * AUTHOR - MANOEL VITOR PAU FERRO
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
        Display(bool state); //função que ativa ou desativa os pinos.
        void numeros(int valor); //função que mostra os números
        void letras(char letra); //função que mostra letras de A à F
        char letrasPosicao(int valor); //função que retorna a letra de acordo com o valor fornecido.
};

#endif
