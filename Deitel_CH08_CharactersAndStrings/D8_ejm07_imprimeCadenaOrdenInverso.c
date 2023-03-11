#include <stdio.h>

void ordenInverso(const char *const ptrS);

int main()
{
  char texto[80];
  
  printf("Texto: ");
  gets(texto);
  
  printf("Texto Ingresado: %s\n", texto);
  printf("Texto Invertido: ");
  ordenInverso(texto);
  
  return 0;
}

void ordenInverso(const char *const ptrS)
{
  if (ptrS[0] == '\0'){
    return;
  } else {
    ordenInverso(&ptrS[1]);
    putchar(ptrS[0]);
  }
}


