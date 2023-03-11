/*
    sscanf pertenece a las FUNCIONES DE ENTRADA/SALIDA de 
    la biblioteca estandar

    int sscanf(char *s, const char *format, ...);

    Equivalente a scanf, excepto que la entrada se lee desde 
    el arreglo s, en lugar de leerlo desde el teclado.
*/

#include <stdio.h>

int main()
{
  char s[] = "31298 87.375";
  int x;
  double y;
  
  sscanf(s, "%d%lf", &x, &y);
  
  printf("Los valores almacenados en el arreglo de caracteres son:\nEntero: %8d\nDouble: %8.3f\n", x, y);
  
  
  
  return 0;
}