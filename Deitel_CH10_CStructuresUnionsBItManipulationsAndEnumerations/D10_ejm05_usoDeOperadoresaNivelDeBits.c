#include <stdio.h>

void despliegaBits(unsigned valor);

int main()
{
  unsigned num1;
  unsigned num2;
  unsigned mask;
  unsigned estBits;
  
  // Operador de Bits AND (&)
  num1 = 65535;
  mask = 1;
  
  printf("El resultado de combinar los siguientes valores:\n");
  
  despliegaBits(num1);
  printf("\n");
  despliegaBits(mask);
  
  printf("\nCon el uso del operador de bits AND (&) es:\n");
  
  despliegaBits(num1 & mask);
  
  // Operador de Bits OR INCLUYENTE (|)
  num1 = 15;
  estBits = 241;
  
  printf("\nEl resultado de combinar los siguientes valores:\n");
  
  despliegaBits(num1);
  //printf("\n");
  despliegaBits(estBits);
  
  printf("\nCon el uso del operador de bits OR INCLUYENTE (|) es:\n");
  
  despliegaBits(num1 & estBits);
  
  // Operador de Bits OR EXCLUYENTE (^)
  num1 = 139;
  num2 = 199;
  
  printf("\nEl resultado de combinar los siguientes valores:\n");
  
  despliegaBits(num1);
  printf("\n");
  despliegaBits(num2);
  
  printf("\nCon el uso del operador de bits OR EXCLUYENTE (^) es:\n");
  
  despliegaBits(num1 ^ estBits);
  
   // Operador de Bits OR COMPLEMENTO (~)
  num1 = 21845;
  
  printf("\nEl complemento a uno de\n");
  
  despliegaBits(num1);
  printf("\n");
  
  printf("\nes:\n");
  
  despliegaBits(~num1);
  
  return 0;
}

void despliegaBits(unsigned valor)
{
  unsigned c;   // contador
  unsigned despliegaMask = 1 << 31;
  
  printf("%11u = ", valor);
  
  for (c = 1; c <= 32; c++){
    putchar(valor & despliegaMask ? '1' : '0');
    valor <<= 1;
    
    if (c % 8 == 0){
      putchar(' ');
    }
  }
  
  putchar("\n");
}