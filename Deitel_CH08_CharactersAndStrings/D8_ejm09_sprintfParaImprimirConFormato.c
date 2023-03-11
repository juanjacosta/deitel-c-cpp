/*
    sprintf pertenece a las FUNCIONES DE ENTRADA/SALIDA de 
    la biblioteca estandar
    
    int sprintf(char *str, const char *formato, ...);

    Equivalente a printf, excepto que la salida se almacena 
    en el arreglo s, en lugar de imprimirse en la pantalla  

    @param str: pointer to a buffer where the resulting C-string 
          is stored. The buffer should be large enough to 
          contain the resulting string

    @param format: C string that contains a format string that 
             follows the same specifications as format in 
             printf (see printf for details).
    
    @param ... : (aditional arguments)
           Depending on the format string, the function may 
           expect a sequence of additional arguments, each 
           containing a value to be used to replace a format 
           specifier in the format string (or a pointer to a 
           storage location, for n). There should be at least 
           as many of these arguments as the number of values 
           specified in the format specifiers. Additional 
           arguments are ignored by the function.
*/

#include <stdio.h>

int main()
{
  char s[80];
  int x;
  double y;
  
  printf("Introduzca un entero y un double:\n");
  scanf("%d%lf", &x, &y);
  sprintf(s, "Entero: %d\nDouble: %.2f", x, y);
  
  printf("La salida con formato almacenada en el arreglo s es:\n%s\n", s);
  
  return 0;
}