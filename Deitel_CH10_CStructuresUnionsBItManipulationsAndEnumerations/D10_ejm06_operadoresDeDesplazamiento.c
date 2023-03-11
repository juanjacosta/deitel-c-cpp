/*
  Programa : D10_ejm06_operadoresDeDesplazamiento
  Proposito: Mostrar el uso de los operadores de desplazamiento 
             a la derecha y desplazamiento a la izquierda
             Deitel - Cap 10 - pg. 371 
*/

#include <stdio.h>

void despliegaBits(unsigned valor);

int main()
{
  unsigned num1 = 960;    // inicializa numero 1
  
  // Operador de desplazamiento a la izquierda
  printf("El resultado del desplazamiento a la izquierda de\n");
  despliegaBits(num1);
  
  printf("Valor desplazado 8 posiciones de bit a la izquierda con el uso del operador (<<)\n");
  despliegaBits(num1 << 8);

    // Operador de desplazamiento a la derecha
  printf("El resultado del desplazamiento a la derecha de\n");
  despliegaBits(num1);
  
  printf("Valor desplazado 8 posiciones de bit a la derecha con el uso del operador (>>)\n");
  despliegaBits(num1 >> 8);
  
  return 0;
}

void despliegaBits(unsigned valor)
{
  unsigned c;                                // contador

  unsigned despliegaMascara = 1 << 31;      // declara y despliega a la izquierda despliegaMascara

  printf("%7u = ", valor);
  
  for (c = 1; c <= 32 ; c++){
   putchar(valor & despliegaMascara ? '1' : '0');
   valor <<= 1;                           // despliega el valor 1 posicion a la izquierda 

   if (c % 8 == 0){
     putchar(' ');
   } 
  }
  putchar('\n');
}
