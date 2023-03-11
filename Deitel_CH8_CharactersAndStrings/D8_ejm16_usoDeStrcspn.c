#include <stdio.h>
#include <string.h>

int main()
{
  const char *cadena1 = "El valor es 3.1419";
  const char *cadena2 = "1234567890";
  
  printf("Cadena 1 = %s\nCadena 2 = %s\n", cadena1, cadena2);
  
  printf("Longitud del segmento de cadena 1 que no contiene caracreres de cadena 2: %u\n", strcspn(cadena1, cadena2));
  
  return 0;
}