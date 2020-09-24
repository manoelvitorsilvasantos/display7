/**
 * AUTHOR - MANOEL VITOR PAU FERRO
 * DISPLAY 7 SEGMENTOS
 * DATA 20/07/1991
*/

#include "display7.h"

/**
 * Função que ativa ou desativa os pinos.
*/
Display::Display(bool state)
{
    switch(state)
    {
        case true:
            DDRB |= (1<<5); //pino 13 - B
            DDRB |= (1<<4); //pino 12 - A
            DDRB |= (1<<3); //pino 11 - F
            DDRB |= (1<<2); //pino 10 - G
            DDRB |= (1<<1); //pino 9 -  E
            DDRB |= (1<<0); //pino 8 -  D
            DDRD |= (1<<7); //pino 7 -  C
            DDRD |= (1<<6); //pino 6 - DOT
        break;

        case false:
            DDRB &= ~(1<<5); //pino 13 - B
            DDRB &= ~(1<<4); //pino 12 - A
            DDRB &= ~(1<<3); //pino 11 - F
            DDRB &= ~(1<<2); //pino 10 - G
            DDRB &= ~(1<<1); //pino 9 -  E
            DDRB &= ~(1<<0); //pino 8 -  D
            DDRD &= ~(1<<7); //pino 7 -  C
            DDRD &= ~(1<<6); //pino 6 - DOT
        break;
    }
}

/**
 * função que exibe um valor número, 
 * de acordo com o valor em inteiro, 
 * fornecido ao parametro da função
*/
void Display::numeros(int valor)
{
    switch(valor)
    {
        case 0:
            PORTB |= (1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB &= ~(1<<2); //G
            PORTB |= (1<<1);//E
            PORTB |= (1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 1:
            PORTB |= (1<<5);//B
            PORTB &= ~(1<<4); //A
            PORTB &= ~(1<<3); //F
            PORTB &= ~(1<<2); //G
            PORTB &= ~(1<<1);//E
            PORTB &= ~(1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 2:
            PORTB |= (1<<5);//B
            PORTB |= (1<<4); //A
            PORTB &= ~(1<<3); //F
            PORTB |= (1<<2); //G
            PORTB |= (1<<1);//E
            PORTB |= (1<<0);//D
            PORTD &= ~(1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 3:
            PORTB |= (1<<5);//B
            PORTB |= (1<<4); //A
            PORTB &= ~(1<<3); //F
            PORTB |= (1<<2); //G
            PORTB &= ~(1<<1);//E
            PORTB |= (1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 4:
            PORTB |= (1<<5);//B
            PORTB &= ~(1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB &= ~(1<<1);//E
            PORTB &= ~(1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 5:
            PORTB &= ~(1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB &= ~(1<<1);//E
            PORTB |= (1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 6:
            PORTB &= ~(1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB |= (1<<1);//E
            PORTB |= (1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 7:
            PORTB |= (1<<5);//B
            PORTB |= (1<<4); //A
            PORTB &= ~(1<<3); //F
            PORTB &= ~(1<<2); //G
            PORTB &= ~(1<<1);//E
            PORTB &= ~(1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 8:
            PORTB |= (1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB |= (1<<1);//E
            PORTB |= (1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 9:
            PORTB |= (1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB &= ~(1<<1);//E
            PORTB |= (1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;
    }
}

/**
 * Função que exibe as letras de A a F,
 * passando com parametro o caracter do tipo char 
*/
void Display::letras(char letra)
{
    switch(letra)
    {
        case 'a':
        case 'A':
            PORTB |= (1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB |= (1<<1);//E
            PORTB &= ~(1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 'b':
        case 'B':
            PORTB &= ~(1<<5);//B
            PORTB &= ~(1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB |= (1<<1);//E
            PORTB |= (1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 'c':
        case 'C':
            PORTB &= ~(1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB &= ~(1<<2); //G
            PORTB |= (1<<1);//E
            PORTB |= (1<<0);//D
            PORTD &= ~(1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 'd':
        case 'D':
            PORTB |= (1<<5);//B
            PORTB &= ~(1<<4); //A
            PORTB &= ~(1<<3); //F
            PORTB |= (1<<2); //G
            PORTB |= (1<<1);//E
            PORTB |= (1<<0);//D
            PORTD |= (1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 'e':
        case 'E':
            PORTB &= ~(1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB |= (1<<1);//E
            PORTB |= (1<<0);//D
            PORTD &= ~(1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;

        case 'f':
        case 'F':
            PORTB &= ~(1<<5);//B
            PORTB |= (1<<4); //A
            PORTB |= (1<<3); //F
            PORTB |= (1<<2); //G
            PORTB |= (1<<1);//E
            PORTB &= ~(1<<0);//D
            PORTD &= ~(1<<7); //C
            PORTD &= ~(1<<6); //DOT
        break;
    }
}

/**
 * Função que retorna a letra, de acordo com o valor,
 * fornecido em interio ao parametro da função,
 * 
 * Obs: só retorna alguma letra, se o valor for entre,
 * 10 a 15.
 * As letras são de A a F.
*/
char Display::letrasPosicao(int valor)
{
    switch(valor)
    {
        case 10:
            return 'a';

        case 11:
            return 'b';

        case 12:
            return 'c';

        case 13:
            return 'd';

        case 14:
            return 'e';

        case 15:
            return 'f';
        default:
            return ' ';
    }
}
