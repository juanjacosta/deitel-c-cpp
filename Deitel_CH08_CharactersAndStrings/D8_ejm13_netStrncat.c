/*
  strcat y strncat pertenecen a las FUNCIONES DE MANIPULACIÓN 
  DE CADENAS de la biblioteca de manipulación de cadenas 

       char *strcat(char *s1, const char *s2);


  Agrega la cadena s2 al arreglo s1. El primer caracter 
  de s2 sobreescribe al caracter de terminación nulo de 
  s1. Devuelve el valor de s1. 

        char *strncat(char *s1, const char *s2, size_t n);

  Agrega al menos n caracteres de la cadena s2 al arreglo s1. 
  El primer caracter de s2 sobreescribe al carácter de 
  terminación nulo de s1. Devuelve el valor de s1. 

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];
    char str2[20];
    strcpy(str1, "To be ");
    strcpy(str2, "or not to be");
    strncat(str1, str2, 12);

    puts(str1);

    return 0;
}