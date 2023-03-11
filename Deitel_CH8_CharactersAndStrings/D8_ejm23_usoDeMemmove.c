#include <stdio.h>
#include <string.h>

int main()
{
  char x[] = "Hogar dulce Hogar";
  
  printf("La cadena en el arreglo x antes de memmove es:\n\"%s\"\n", x);
  
  printf("La cadena en el arreglo x despues de memmove es:\n\"%s\"\n", memmove(x, &x[6], 11));
  
  return 0;
}