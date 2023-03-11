#include <stdio.h>

union numero{
  int x;
  double y;
  
};

int main()
{
  union numero valor;
  
  valor.x = 100;
  
  printf("Coloca un valor en el miembro entero e imprime ambos miembros\nint x: %d\ndouble y: %f\n", valor.x, valor.y);
  
 valor.y = 100.0;
  
  printf("Coloca un valor en el miembro double e imprime ambos miembros\nint x: %d\ndouble y: %f\n", valor.x, valor.y);
  
  return 0;
}