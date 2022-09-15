/**
 * AUTHOR - MANOEL VITOR
 * DISPLAY 7 SEGMENTS
 * DATE 20/07/1991
*/

#include "display7.h"

/**
 * Function that active or desactive pins.
*/
Display::Display(bool state)
{
    switch(state)
    {
        case true:
            DDRB |= (1<<5); //pin 13 - B
            DDRB |= (1<<4); //pin 12 - A
            DDRB |= (1<<3); //pin 11 - F
            DDRB |= (1<<2); //pin 10 - G
            DDRB |= (1<<1); //pin 9 -  E
            DDRB |= (1<<0); //pin 8 -  D
            DDRD |= (1<<7); //pin 7 -  C
            DDRD |= (1<<6); //pin 6 - DOT
        break;

        case false:
            DDRB &= ~(1<<5); //pin 13 - B
            DDRB &= ~(1<<4); //pin 12 - A
            DDRB &= ~(1<<3); //pin 11 - F
            DDRB &= ~(1<<2); //pin 10 - G
            DDRB &= ~(1<<1); //pin 9 -  E
            DDRB &= ~(1<<0); //pin 8 -  D
            DDRD &= ~(1<<7); //pin 7 -  C
            DDRD &= ~(1<<6); //pin 6 - DOT
        break;
    }
}

/**
 * function that displays a number value,
 * according to the integer value,
 * given to the function parameter
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
 * function that present the letters of A at F,
 * passing with parameter the character of type char.
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
 * function that return the letter, according with value,
 * passing in integer at parameter of function.
 * 
 * Obs: Only will return some letter, if the value in between 10 at 15.
 * The letter is A at F.
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
