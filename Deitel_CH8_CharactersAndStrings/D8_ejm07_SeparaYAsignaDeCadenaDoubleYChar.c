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

  const char *cadena = "51.2% son admitidos";     // Inicializa la cadena 
  
  double d;               // variable para almacenar la secuencia convertida 
  char *ptrCadena;        // se crea un apuntador char 
  
  d = strtod(cadena, &ptrCadena);   // indica que a d se le asigna el valor double convertido 
                                    // de la cadena, y a ptrCadena se le asigna la ubicacion 
                                    // del 1er caracter despues del valor convertido en cadena
  
  printf("La cadena \"%s\" se convierte en\n", cadena);
  
  printf("Un valor double %.2f y la cadena \"%s\"\n", d, ptrCadena);
  
  return 0;
}