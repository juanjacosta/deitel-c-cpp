#include <stdio.h>

void invierteOrden(const char * const ptrS);

int main()
{
  char name[20];
  char fecha[11];
  char id[21];
  int d, m, y, cel, cep;
  
  printf("Name: ");
  gets(name);
  
  puts("Fecha de nacimiento");
  gets(fecha);
  sscanf(fecha, "%d%d%d", &d, &m, &y);
  
  printf("Cel y CEP: ");
  scanf("%d%d", &cel, &cep);
  sprintf(id, "Cel: %d\nCPF: %d\n", cel, cep);
  
  printf("\nName: ");
  invierteOrden(name);
  printf("\nDia: %d\nMes: %d\nAno: %d\n", d, m, y);
  printf("Datos de contacto: %s\n", id);
  
  
  return 0;
}

void invierteOrden(const char * const ptrS)
{
  if (ptrS[0] == '\0'){
    return;
  } else {
    invierteOrden(&ptrS[1]);
    putchar(ptrS[0]);
  }
}