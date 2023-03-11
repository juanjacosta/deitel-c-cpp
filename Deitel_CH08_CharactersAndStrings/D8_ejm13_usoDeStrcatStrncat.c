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
  char s1[20] = "Feliz ";
  char s2[] = "Anio nuevo ";
  char s3[40] = "";
  
  printf("s1 = %s\ns2 = %s\n", s1, s2);
  
  // concatena s2 y s1
  printf("strcat(s1, s2) = %s\n", strcat(s1, s2));
  
  printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6));
  
  printf("strcat(s3, s1) = %s\n", strcat(s3, s1));
  
  return 0;
}