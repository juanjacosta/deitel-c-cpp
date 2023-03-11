/*
    Programa : D5_ejr5-22_separatingDigits.c
    Propósito: Escribir segmentos de programa que cumplan cada una de
               las siguientes condiciones:

               a) Calcular la parte entera del cociente cuando el
                  entero a se divide por el entero b

               b) Calcular  el resto entero cuando el
                  entero a se divide por el entero b

               c) Usar las partes del programa desarrollados en (a) y (b)
                  para escribir una función que ingrese un número entre 1
                  y 32767 y lo imprima como una série de dígitos, con dos
                  espacios entre cada dígito.

                Ejm: 4562 debe escribirse como 4  5  6  2

                   dividendo <- 12 |_4  -> divisor
                     residuo <-  0   3  -> cociente
*/
#include <stdio.h>

void separatingDigits(unsigned int n);

int main(void)
{
   unsigned int num;

   puts("Ingrese numero: ");
   scanf("%d", &num);

   separatingDigits(num);
}

void separatingDigits(unsigned int n)
{
   unsigned int divisor, cifras;

   while (n)
   {
      cifras = n % 10;
      printf("%d ", cifras);

      n = n / 10;
   }

   printf("\n");
}