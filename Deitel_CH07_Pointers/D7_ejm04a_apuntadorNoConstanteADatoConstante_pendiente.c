#include <stdio.h>
#include <string.h>

void printString (const char *sPtr);

int main (void)
{
  char arr[20];
  printf ("Enter a string: ");
  scanf ("%s", arr);
  printString (arr);
  puts ("");
}

void printString (const char *sPtr)
{
  for (; *sPtr != '\0'; ++sPtr)
    //   // while (*sPtr != '\0')
    {
      printf ("%c", *sPtr);
      //     // puts ("%c", *sPtr); // puts gera erro com pointers
    }
  sPtr++;
  // getline (&sPtr, 20, stdin);
}

// 7.5.2 pg 318 - PENDIENTE imprimir palabras com espaços
// revisar cs50