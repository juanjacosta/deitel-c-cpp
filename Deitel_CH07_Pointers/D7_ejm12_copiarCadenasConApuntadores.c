/*
    Programa : D7_ejm12_copiarCadenasConApuntadores.c
    Propósito: Escribir un programa que muestre el uso de la notación de
               arreglos con apuntadores mediante dos funciones que copian uno a
               uno los elementos de un arreglo en otro.

               Ejm Deitel - Cap 7 - Ejm 7.21 - pg 333
 */

#include <stdio.h>
#define SIZE 10

void copy1 (char *const s1, const char *const s2); // prototipo
void copy2 (char *s1, const char *s2);             // prototipo

int main ()
{
  char cadena1[SIZE];          // crea el arreglo cadena1
  char *cadena2 = "Hello you"; // crea un apuntador a una cadena

  copy1 (cadena1, cadena2);
  printf ("cadena1 = %s\n", cadena1);

  char cadena3[SIZE];          // crea el arreglo cadena3
  char cadena4[] = "Good Bye"; // crea un array contendo una cadena

  copy2 (cadena3, cadena4);
  printf ("cadena3 = %s\n", cadena3);
}

/*
 *  @brief copy s2 to s1 using array notation
 *  @param s1 recibe um ponteiro constante para um dado não constante
 *  @param s2 recebe um ponteiro constante para um dado constante
 */
void copy1 (char *const s1, const char *const s2)
{
  for (size_t i = 0; (s1[i] = s2[i]) != '\0'; i++)
    {
      ; // do nothing in body
    }
}

/*
 *  @brief copy s2 to s1 using pointer notation
 *  @param s1 recibe um ponteiro não constante para um dado não constante
 *  @param s2 recebe um ponteiro não constante para um dado constante
 */
void copy2 (char *s1, const char *s2) // copia s2 en s1 con el uso de la
{                                     // notación de apuntadores
  for (; (*s1 = *s2) != '\0'; s1++, s2++)
    {
      ; // do nothing in body
    }
}