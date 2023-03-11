/*
    Programa : D8_ejm07_SeparaYAsignaDeCadenaDoubleYChar.c 
    Proposito: Utilizar la funcion de conversion de cadenas strtod() de la biblioteca 
               general de utilidades stdlib.h
               La funcion strtod() convierte una secuencia de caracteres que representan
               un valor de punto flotante a double. La funcion recibe dos argumentos, una 
               cadena (char *) y un apuntador a una cadena (char **). La cadena contiene 
               la secuencia de caracteres que se convertiran a double. Al apuntador se le 
               asigna la ubicacion del primer caracter despues de la parte convertida de 
               la cadena. 
            
               Deitel Cap 8 - Ejemplo 8.9 - pg. 297   
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // Inicializa el apuntador cadena 

  const char *cadena = "-1234567abc";     // Inicializa la cadena 
  
  char *ptrResto;        // se crea un apuntador char 
  long x;               // variable para almacenar la secuencia convertida 
  
  x = strtol(cadena, &ptrResto, 0);   // indica que a x se le asigna el valor long convertido 
                                      // de la cadena. A ptrResto se le asigna el residuo de la 
                                      // cadena despues de la conversion. El uso de NULL para el 
                                      // 2do argumento provoca que se ignore el resto de la cadena.
                                      // El 3er argumento, 0, indica el formato del valor a convertira
                                      // este puede ser: octal (base 8), decimal(base 10), etc
  
  printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
         "La cadena original es ", cadena,
         "El valor convertido es ", x, 
         "El resto de la cadena original es ", ptrResto,
         "El valor convertido mas 567 es ", x + 567);
  
  return 0;
}