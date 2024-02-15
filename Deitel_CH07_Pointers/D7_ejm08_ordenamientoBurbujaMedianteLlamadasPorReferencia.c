/*
    Programa : D7_ejm08_ordenamientoBurbujaMedianteLlamadasPorReferencia.c
    Propósito: Escribir un programa que implemente el ordenamiento de burbuja
   de un arreglo mediante dos funciones, ordenamientoBurbuja e intercambia. La
   primera ordena el arreglo y la 2da intercambia loe elementos segun la
   verificacion de posiciones. Ya que C promueve el ocultamiento de informacion
   entre funciones, la función intercambia no tiene acceso a los elementos
   individuales del arreglo en ordenaBurbuja. Y ya que ordenaBurbuja necesita
   intercambiar el orden de los elementos del arreglo, pasa cada uno de estos
   elementos a la función intercambia mediante una llamada por referencia; la
   direccion de cada elemento del arreglo se pasa de manera explicita.

               Ejm Deitel - Cap 7 - Ejm 7.15 - pg 322
 */
#include <stdio.h>
#define TAM 10

void ordenaBurbuja (int *const arreglo, const int tamanio);

int main ()
{
  int a[TAM] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
  int i;

  printf ("Elementos de datos en el orden original\n");

  for (i = 0; i < TAM; i++)
    {
      printf ("%4d ", a[i]);
    }

  ordenaBurbuja (a, TAM);

  printf ("\nElementos de datos en orden ascendente\n");

  for (i = 0; i < TAM; i++)
    {
      printf ("%4d ", a[i]);
    }

  return 0;
}

void ordenaBurbuja (int *const arreglo, const int tamanio)
{
  void intercambia (int *ptrElemento1, int *ptrElemento2); // prototipo

  int pasada; // contador pasadas
  int j;      // contador comparaciones

  for (pasada = 0; pasada < tamanio - 1; pasada++)
    {
      for (j = 0; j < tamanio - 1; j++)
        {
          if (arreglo[j] > arreglo[j + 1])
            {
              intercambia (&arreglo[j], &arreglo[j + 1]);
            }
        }
    }
}

void intercambia (int *ptrElemento1, int *ptrElemento2)
{
  int almacena = *ptrElemento1;  // intercambia los valores en las ubicaciones
  *ptrElemento1 = *ptrElemento2; // de memoria a los cuales apunta ptrElemento1
  *ptrElemento2 = almacena;      // y ptrElemento2
}