/**
 * @file D7_ejm02_argByReferenceToFunction.c
 * @brief Cube a variable using pass-by-value and pass-by-reference.
 */
#include <stdio.h>

int cubeByValue (int n);
void cubeByReference (int *nPtr);

int main (void)
{
  int number = 5;
  int num;

  printf ("========================================================\n");
  printf ("\tPassing Arguments value and by reference\n");
  printf ("========================================================\n");
  printf ("The original value of number is %d\n\n", number);

  // pass number by value to cubeByValue
  num = cubeByValue (number);
  printf ("Number by value: %d\n", num);

  printf ("\nValue of number: %d\n\n", number);

  // pass number by reference to cubeByReference
  cubeByReference (&number);
  printf ("Number by reference: %d\n", number);

  puts ("");
}

int cubeByValue (int n) { return n * n * n; }

void cubeByReference (int *nPtr) { *nPtr = *nPtr * *nPtr * *nPtr; }