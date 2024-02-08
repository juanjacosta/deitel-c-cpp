#include <ctype.h>
#include <stdio.h>

int main (void)
{
  char c[] = "test lowercase to uppercase";
  char *cPtr = c; // & not necessary in arrays

  printf ("%s\n", c);

  while (*cPtr != '\0')
    {
      if (islower (*cPtr))
        {
          *cPtr = toupper (*cPtr);
        }
      cPtr++;
    }
  printf ("%s\n", c);
}