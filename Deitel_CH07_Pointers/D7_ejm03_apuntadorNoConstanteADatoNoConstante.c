/*
    Programa : D7_ejm03_apuntadorNoConstanteADatoNoConstante.c
    Propósito: Escribir un programa que muestre el nivel mas alto de acceso a
   datos, que es un puntero no constante a un dato no constante, con un
   programa que convierta una cadena a mayusculas. Existen 4 formas de pasar
   punteros a funciones:

               1. Un puntero no constante para un dato no constante (Mayor
   nivel de acceso).
               2. Un puntero constante para un dato no constante.
               3. Un puntero no constante para un dato constante.
               4. Un puntero constante a un dato constante. (Menor nivel de
   acceso).

 */

#include <ctype.h>
#include <stdio.h>

void convertToUppercase (char *ptrS);

int main ()
{
  char cadena[] = "caracteres y $32.98";
  printf ("la cadena antes de la conversion es: %s\n", cadena);

  convertToUppercase (cadena); // com um array não precisa passar o &

  printf ("La cadena despues de la conversion es: %s\n", cadena);

  return 0;
}

void convertToUppercase (char *ptrS)
{
  while (*ptrS != '\0')
    {
      if (islower (*ptrS))
        {
          *ptrS = toupper (*ptrS);
        }
      ++ptrS;
    }
}