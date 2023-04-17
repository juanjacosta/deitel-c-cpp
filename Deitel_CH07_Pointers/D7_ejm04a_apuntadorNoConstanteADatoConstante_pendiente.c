#include <stdio.h>

void printString(const char *sPtr);

int main(void)
{
  char string[20];
  printf("Enter a string: ");
  scanf("%s", string);
  printString(string);
  puts("");
}

void printString(const char *sPtr)
{
  for (; *sPtr != '\0'; ++sPtr)
  // while (*sPtr != '\0')
  {
    printf("%c", *sPtr);
  }
  sPtr++;
}

// 7.5.2 pg 318 - PENDIENTE imprimir palabras com espaços
// revisar cs50