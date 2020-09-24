#include <display7.h>

Display display(true);

int main()
{
  while(true)
  {
    for(int i= 0; i < 16; i++)
    {
      if(i <10)
      {
        display.numeros(i);
        _delay_ms(250);
      }
      else
      {
        display.letras(display.letrasPosicao(i));
        _delay_ms(500); 
      }
    }
  }
  return 0;
}
