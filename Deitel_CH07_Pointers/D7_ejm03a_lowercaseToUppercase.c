#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char c[] = "teste de lowercase to uppercase";
  char *cPtr = c; // & not necessary in arrays

  printf("%s\n", c);

  while (*cPtr != '\0')
  {
    if (islower(*cPtr))
    {
      *cPtr = toupper(*cPtr);
    }
    cPtr++;
  }
  printf("%s\n", c);
}