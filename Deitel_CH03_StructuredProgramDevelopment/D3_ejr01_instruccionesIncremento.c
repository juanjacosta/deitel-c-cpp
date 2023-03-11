/*  Programa : D3_ejr01_instruccionesIncremento.c
    Proposito: Escribir cuatro instrucciones diferentes en C que sumen
               1 a la variable entera x
               Ejercicio 3.2 - Deitel - pg. 76
    Fecha    : 20/08/2019
 */
#include <stdio.h>

int main()
{   
  int x = 0;

  printf("=========================================\n");
  printf("\tInstrucciones Incremento\n");
  printf("=========================================\n");

  printf("x inicial = %d\n", x);
  printf("--------------------\n");
  x = x + 1;
  printf("x = %d\n", x);

  x += 1;
  printf("x = %d\n", x);

  x++;
  printf("x = %d\n", x);

  ++x;
  printf("x = %d\n", x);
  
    return 0;
}