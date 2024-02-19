/*
    Programa : D7_ejm11_referenciaAElementosDeArrayPorApuntadores.c
    Propósito: Utilizar los cuatro métodos para hacer referencia a los
               elementos de un arreglo:
               - Indexación de array
               - Pointer/offset notation (apuntador/desplazamiento) con el
                 nombre del arreglo como apuntador
               - Indexación de puntero
               - Pointer/offset notation (apuntador/desplazamiento) con un
                 apuntador

               Ejm Deitel - Cap 7 - Ejm 7.20 - pgs 331 - 332
 */
#include <locale.h>
#include <stdio.h>
#define ARRAY_SIZE 4

int main ()
{
  int b[] = { 10, 20, 30, 40 }; // Inicializa el arreglo b
  int *ptrB = b;                // Establece ptrB para que apunte al arreglo b

  setlocale (LC_ALL, "Spanish");
  puts ("Arreglo b impreso con \nArray index notation\n");

  // Muestra el arreglo b con Array index notation
  for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
      printf ("b[%lu] = %d\n", i, b[i]);
    }

  puts ("\nPointer/offset notation where\n"
        "the pointer is the array name");

  // Muestra el arreglo b mediante el uso del nombre del arreglo y notación
  // apuntador/desplazamiento
  for (size_t offset = 0; offset < ARRAY_SIZE; offset++)
    {
      printf ("*(b + %lu) = %d\n", offset, *(b + offset));
    }

  puts ("\nPointer index notation");
  // Muestra el arreglo b mediante el uso de ptrB y pointer index notation

  for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
      printf ("ptrB[%lu] = %d\n", i, ptrB[i]);
    }

  puts ("\nPointer/offset notation");

  // Muestra el arreglo b mediante el uso de ptrB y notacion de
  // apuntador/desplazamiento
  for (size_t offset = 0; offset < ARRAY_SIZE; offset++)
    {
      printf ("*(ptrB + %lu) = %d\n", offset, *(ptrB + offset));
    }

  return 0;
}