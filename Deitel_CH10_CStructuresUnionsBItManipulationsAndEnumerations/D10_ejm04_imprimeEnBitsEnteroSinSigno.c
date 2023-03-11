/* Programa : D10_ejm04_imprimeEnBitsEnteroSinSigno.c
   Proposito: imprimir un entero sin signo en su representacion 
              binaria, en grupos de 8 bits (1 byte) cada uno. 
              Esto es util para ilustrar los efectos precisos 
              de los operadores a nivel de bits 
 */

#include <stdio.h>

void despliegaBits(unsigned valor);

int main()
{
  unsigned x;
  
  printf("Introduzca un entero sin signo: ");
  scanf("%u", &x);
  
  despliegaBits(x);
  
  return 0;
}

void despliegaBits(unsigned valor)
{
  unsigned c;
  
  // Define despliega Mascara y desplaza 31 bits hacia la izquierda
  
  unsigned despliegaMascara = 1 << 31;
  
  printf("%10u = ", valor);
  
  for (c = 1; c <= 32; c++){
    putchar(valor & despliegaMascara ? '1' : '0');
    valor <<= 1;
    
    if (c % 8 == 0){
      putchar(' ');
    }
  }
  putchar('\n');
}