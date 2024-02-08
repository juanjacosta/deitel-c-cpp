#include <stdio.h>

int main (void)
{
  int a = 7;
  int *aPtr = &a;

  printf ("=====================================\n");
  printf ("\tOperadores de Punteros\n");
  printf ("=====================================\n");

  printf ("Address of a: %p\n", &a);
  printf ("Valor of aPtr: %p\n", aPtr);
  puts ("");
  printf ("Valor of a: %d\n", a);
  printf ("Valor of *aPtr: %d\n", *aPtr);
  printf ("\nMostrando que * e & son complementos\nuno del otro:\n\n");
  printf ("&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);
  printf ("=====================================\n");
}